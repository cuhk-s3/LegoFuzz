int a, b;
static int c;
static int *d = &c;
short e;
char g;
unsigned short h;
int *i;
int j(int k) {
  if (k & a)
    return 1;
  return 0;
}
int l(int k) {
  int f = j(k);
  return f;
}
void n() { int *m[] = {0, &d}; }
void o() {
  for (; g; g++) {
    int *p = &b;
    short *q = &e;
    int r = l(*d + 5);
    *p = 0;
    *q = *i || (unsigned short)(r + 22158 + 36566 + *d - 1641080165) + h;
  }
}
