int printf(const char *, ...);
int a, b;
int main() {
  int c = 7;
  float d = 0;
  while (c) {
    d++;
    c /= 2;
    a = 384 + 1;
  }
  float e = a + 2;
  b = d + 1.442695f * (e * e * e);
  printf("%d\n", b);
}

/* Bisection: 17d9560294eee1eae5e2d3ac1ab84f514318409e */
