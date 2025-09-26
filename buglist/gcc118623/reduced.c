int printf(const char *, ...);
int a, b;
int c(int f, int g) {
  for (int d = 0; d <= 4; d++) {
    int e = 1 << f;
    if (g & e)
      return d;
  }
  return 5;
}
int h(int f, int g) {
  if (c(g - 50, g) + g + g & 1)
    ;
  else if (f)
    if (g & 4)
      a = 1;
  return a;
}
int main() {
  while (h(b + 5, b + 63))
    ;
  printf("%d\n", 0);
}
