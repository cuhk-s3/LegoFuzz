import time
import yaml
from abc import ABC, abstractmethod
from openai import OpenAI
from together import Together

with open("config/config.yaml", "r", encoding="utf-8") as f:
    config = yaml.safe_load(f)

MAX_TOKENS = config["MAX_TOKENS"]
TEMPERATURE = config["TEMPERATURE"]
TOP_P = config["TOP_P"]
STOP = config["STOP"]
MODEL_NAME = config["MODEL_NAME"]
PROMPT_ROLE = config["PROMPT_ROLE"]


class LLMClient(ABC):
    @abstractmethod
    def create_chat_completion(self, messages, **kwargs):
        pass

    def _prepare_conversation(self, messages):
        conversation = [{"role": "system", "content": PROMPT_ROLE}]
        for i, msg in enumerate(messages):
            role = "user" if i % 2 == 0 else "assistant"
            conversation.append({"role": role, "content": msg})
        return conversation

    def _get_parameters(self, kwargs, model_key):
        return {
            "model": kwargs.get("model", MODEL_NAME[model_key]),
            "max_tokens": kwargs.get("max_tokens", MAX_TOKENS),
            "temperature": kwargs.get("temperature", TEMPERATURE),
            "top_p": kwargs.get("top_p", TOP_P),
            "stop": kwargs.get("stop", STOP),
        }

    def _retry_request(self, request_func):
        max_retries = 3
        for attempt in range(max_retries):
            try:
                return request_func()
            except Exception as e:
                print(f"Attempt {attempt + 1} failed: {e}")
                if attempt < max_retries - 1:
                    time.sleep(2 ** attempt)
                else:
                    print("Max retries reached. Returning None.")
                    return None


class TogetherAIClient(LLMClient):
    def __init__(self, api_key):
        self.client = Together(api_key=api_key)

    def create_chat_completion(self, messages, **kwargs):
        params = self._get_parameters(kwargs, "together_ai")
        conversation = self._prepare_conversation(messages)
        
        return self._retry_request(lambda: self.client.chat.completions.create(
            messages=conversation, **params
        ))


class OpenAIClient(LLMClient):
    def __init__(self, api_key):
        self.client = OpenAI(
            api_key=api_key,
        )
        
    def create_chat_completion(self, messages, **kwargs):
        params = self._get_parameters(kwargs, "open_ai")
        conversation = self._prepare_conversation(messages)
        
        return self._retry_request(lambda: self.client.chat.completions.create(
            messages=conversation, **params
        ))


class DeepSeekClient(LLMClient):
    def __init__(self, api_key):
        self.client = OpenAI(
            base_url="https://api.deepseek.com", 
            api_key=api_key,
        )
    
    def create_chat_completion(self, messages, **kwargs):
        params = self._get_parameters(kwargs, "deepseek_ai")
        conversation = self._prepare_conversation(messages)
        
        return self._retry_request(lambda: self.client.chat.completions.create(
            messages=conversation, **params
        ))


class LLMClientFactory:
    @staticmethod
    def create_client(client_type, api_key):
        if client_type == "togetherai":
            return TogetherAIClient(api_key)   
        elif client_type == "openai":
            return OpenAIClient(api_key)    
        elif client_type == "deepseek":
            return DeepSeekClient(api_key) 
        else:
            raise ValueError(f"Invalid client type: {client_type}")
