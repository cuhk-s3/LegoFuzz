int printf(const char *, ...);
static int a[] = {4294967295, 5};
int b, c;
int main() {
  a[1] = b = 5;
  unsigned d = -13;
  for (; d >= 8; d = a[0] + d + 6) {
    int *e = &b;
    *e = a[0] - -1 + b;
  }
  a[c];
  printf("%d\n", b);
}

/* Bisection: 6d6eea92e36c301e34a7ec11b2a40e3080f79f53 */
