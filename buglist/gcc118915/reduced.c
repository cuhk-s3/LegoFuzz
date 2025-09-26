int printf(const char *, ...);
int a;
int b(int c, int d, int e, int f) {
  if (!d || !e)
    return -22;
  if (c > 16)
    return -22;
  if (!f)
    return -22;
  return 2;
}
int main() {
  int g = b(a + 21, a + 6, a + 34, a + 26);
  printf("%X\n", g);
}

/* Bisection: 7d75ea04cf6d9c8960d5c6119d6203568b7069e9 */
