int a, c;
long b, d;
int e(long h, long i) {
  long f = i - 2;
  if (f >= a)
    return 1;
  long *g = (long *)(h + f * sizeof(long));
  *g = b;
}
void j(unsigned short h) { e(h, h); }
void k() { j(c + (int)d); }
void main() {}

/* Bisection: c9832da35092e8733d505a4856f2b3dca5bd05b1 */
