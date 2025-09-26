int a, e;
int *b;
short c[];
short d;
void f() {
  int g;
  for (;;)
    for (; a - 3 + g < 6; g = g + 1)
      c[g] = d;
}
void h();
void i() {
  h();
  f();
}
void h() {
  e = 0;
  for (; e <= 50; ++e) {
    int *j = &a;
    *j = *b + e;
  }
}
