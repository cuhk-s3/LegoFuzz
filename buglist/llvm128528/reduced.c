int printf(const char *, ...);
int a, b, c;
long double d;
int f(int g, int i) {
  int e = g + i;
  e++;
  return e;
}
int j() {
  int h = -1;
  if (b)
    return h;
  return 0;
}
void k(int g) { a = -66 + g - 38; }
int main() {
  int l, m = j();
  l = f(m + 34, m + 80) + m - 112 + m;
  k(l + 38 - 37 + 38);
  d = 4 + a - -66;
  a = c = d * 4.16666666666666666019e02;
  printf("%X\n", c);
}

/* Bisection: 15a7de697ae5ad88fd96ef7dc39ac479cc6e2eaf */
