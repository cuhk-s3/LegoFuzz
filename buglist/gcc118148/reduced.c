int printf(const char *, ...);
short a;
int b;
short *c = &a;
static int(d)(int e, unsigned f) { return e < 0 || f ? e : 0; }
static char g(long e, unsigned char f) {
  f++;
  b = d(f, e);
  *c = b;
  return 0;
}
int main() {
  g(4073709551609, 255);
  printf("%d\n", a);
}

/* Bisection: 96fb71883d438bdb241fdf9c7d12f945c5ba0c7f */
