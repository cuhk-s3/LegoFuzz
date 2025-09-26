int printf(const char *, ...);
int a, b = 422;
char c;
char(d)(unsigned char e, unsigned char f) { return e / f; }
short(i)(short e, short f) { return e - f; }
int j() {
  int g, h = 0;
  for (; h < 1; ++h)
    g = h;
  return g;
}
int main() {
  int k;
  short l = i(~0, b);
  k = j();
  c = d(l, k + 1);
  printf("%X\n", a);
}
