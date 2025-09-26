int printf(const char *, ...);
int a;
unsigned char c;
int e(int f) {
  int d = f * 10;
  return d;
}
int g(int f, int *l) {
  int h = 0;
  for (int j = 0; j < 10; j++)
    for (int k = 0; k < f; k++)
      if (l[k])
        h++;
  return h;
}
int m(int f) {
  int b = 0, n = g(f, &b);
  return n;
}
int main() {
  int i = 0;
  for (; e(c + 77) + c - 836 + i < 2; i++)
    for (; m(c - 5);)
      ;
  printf("%X\n", a);
}
