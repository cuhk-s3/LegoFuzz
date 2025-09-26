int printf(const char *, ...);
int a, d;
long b, c;
int e(int f, int g, unsigned long h, long j) {
  unsigned long i = 0;
  if (g)
    switch (f) {
    case 8:
      i = b;
      break;
    case 6:
      i = c;
    }
  else
    switch (f) {
    case 8:
      i = h;
      break;
    case 24:
    case 32:
      i = j;
    }
  return i;
}
int main() {
  int k = a * (409628 - 28);
  d = e(k - 1048524, 0, k - 1048487, (unsigned long)k - 1048531);
  printf("%d\n", d);
}

/* Bisection: 602e824eec30a7c6792b8b27d61c40f1c1a2714c */
