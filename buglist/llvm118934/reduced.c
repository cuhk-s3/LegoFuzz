static char c = -2, l;
char d;
int e, f, b, k;
static char *g = &d;
long h;
static int *i = &f;
char a;
int m(int n) {
  if (n < 0)
    return n;
  return 0;
}
void o(long n) { *i = m(c + 6) + c + n; }
void main() {
  a = c;
  char *j[2] = {&g};
  for (; b;)
    ;
  *g = 0;
  e |= 0 != h;
  l = *g;
  o(l != 0);
  c = 7;
  for (;; c = 0)
    k = *i + *i;
}

/* Bisection: 9715c545d33b3a32ddc1ae817ba9356ade1fb9df */
