int printf(const char *, ...);
int a, b, d;
void exit(int);
int c(int e, unsigned long p2) {
  double g = -p2 / 1000000.0;
  if (g > 3)
    g = 3;
  int f = e * 10 + g;
  return f;
}
int h(int *e) {
  if (0 >= d)
    return 0;
  return e[0];
}
int i(int e) {
  int j = h(&e);
  return c(67, j + 2) - 673 + j;
}
void k(int e, int p2) {
  int l = e - p2;
  if (1 != l)
    exit(3);
}
int main() {
  int m = i(9), q = i(5);
  b = m;
  k(5, q + 4);
  printf("%X\n", a);
}

/* Bisection: 42cbceb0f0160d67145723613fda325dbd129308 */
