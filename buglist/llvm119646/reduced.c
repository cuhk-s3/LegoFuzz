int printf(const char *, ...);
long a, b = 208;
short c;
long(d)(long e) { return (a && e && 2036854775807 / e) * a; }
void f(long *e) {
  if (d(c | (*e = b || 0)))
    for (;;)
      ;
}
int main() {
  long *g = &b;
  *g = 0;
  f(&b);
  printf("%d\n", (int)b);
}

/* Bisection: ebe741fad07e3fda388d0fa44f256a07429cce6a */
