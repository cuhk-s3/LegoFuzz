int a, b, c, d, e, f;
int g() {
  if (a && b)
    return 1;
  a = c;
  return -1;
}
int h() {
  int i = f = 4 + 4;
  for (; f; f--) {
    int j = g();
    i |= e + j;
    i |= d + j;
  }
  return i;
}
