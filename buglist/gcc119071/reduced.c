int printf(const char *, ...);
int a, b;
int main() {
  int c = 0;
  if (a + 2)
    c = 1;
  int d = (1 + c - 2 + c == 1) - 1;
  b = (d + 1 << d) + d;
  printf("%X\n", b);
}

/* Bisection: a42ed1d9181d21d5cb02f131f641c0cf375eca9d */
