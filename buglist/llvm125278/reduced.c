int a, h;
struct {
  char b;
  long c;
  char d
} static e = {2, 2, 5};
char f, j, l;
short g;
int *i;
static short k;
void m() {}
void n() {
  m(e);
  for (; f; f++) {
    j ^= (a > (short)*i + k | e.d) <= 0;
    h = l;
  }
}
void o() {
  g = 1;
  for (; g;)
    k = 9;
}
void main() {}

/* Bisection: 6d6eea92e36c301e34a7ec11b2a40e3080f79f53 */
