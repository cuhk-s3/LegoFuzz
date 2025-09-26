int printf(const char *, ...);
int a, b, c, e, f;
long k, l;
void m(int n) {
  b = 1;
  for (; b <= n; b++)
    for (; c; c++)
      ;
}
long o(long n) {
  long g = 0, i = 1, j = n;
  char h = 0;
  while (j > 0) {
    char d = j & i;
    if (d)
      g += i << h;
    j >>= 1;
    h++;
  }
  g *= h % 2 == 0 ? 2 : 3;
  return g;
}
long p(unsigned short n) {
  for (; e;)
    if (f)
      return 0;
  return n;
}
int main() {
  k = o(207 + 122);
  l = p((char)k);
  m(l);
  printf("%X\n", a);
}

/* Bisection: 0289dad538fa2fdc1a82a26f5d19f94fbd20d949 */
