int a, b;
char c;
void f(int g) {
  int d;
  for (int e = 0; e < g; e++)
    d = e;
  a = d;
}
void h() {
  if (c)
    b = 0;
  else
    b = 1;
  f(b + 42);
}
void main() {}

/* Bisection: 26324bc1bf397453ce966f56a88245263f7beec5 */
