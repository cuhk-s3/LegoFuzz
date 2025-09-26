int printf(const char *, ...);
int a, c;
long b;
short d;
long e(long f, long h, long i) {
  for (long g = f; g <= h; g += i)
    b += g;
  return b;
}
int main() {
  c = 1;
  for (; c >= 0; c--)
    ;
  for (; e(d + 40, d + 88, c + 87) < 4;)
    ;
  printf("%X\n", a);
}
