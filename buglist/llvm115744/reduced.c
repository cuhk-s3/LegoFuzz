int a, b;
int *c;
int e(int f) {
  int d = 0;
  for (; d < f; d++) {
    a++;
    if (d != f - 1)
      a++;
  }
}
void g() {
  for (; c[b]; b++)
    c[e(b + 9)];
}
void main() {}

/* Bisection: b841e2eca3b5c8b408214a46593f6a025e0fe48b */
