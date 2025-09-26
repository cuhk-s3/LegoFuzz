int a, b;
void c();
int d(int e) {
  if (e)
    return 3;
  return 2;
}
int f(int e) {
  int i = d(e) + e;
  return i;
}
int j(int e) {
  static char g;
  char *h = &g;
  a = h - "";
  b = a << e;
  return f(b - 7) + 303 + b;
}
void k() {
  int l = j(4);
  c(l);
}
