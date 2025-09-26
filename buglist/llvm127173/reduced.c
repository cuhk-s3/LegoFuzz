int a, b;
int c(int *d, int *e) {
  int f = b = 0;
  for (; b <= 14; b++)
    if (b < a && e[b])
      d[f++] = b;
  return f;
}
int g(int d) {
  int h[1];
  int i = c(h, &d);
  return i;
}
