int printf(const char *, ...);
int a;
int b(int f) {
  int c = f ? 1 : 0, d = f ? 1 : 0, e = f ? 1 : 0;
  retu4rn c + d + e;
}
int g() {
  if (!(b(a + 3) + a - 9 + a & 1))
    return -1;
  return 0;
}
int main() {
  int h = g();
  printf("%X\n", h);
}
