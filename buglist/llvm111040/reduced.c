#include "csmith.h"
static uint8_t b = 188;
void c();
long d(int e, int p2, short j) {
  long f = 0, a = 1;
  unsigned long g;
  int h;
  if (e < 0 || j < 0)
    return 1;
  h = 0;
  for (; h < p2; h++) {
    a *= j + 1;
    g = e * a;
    f += g % (j + 1);
  }
  if (f < 0)
    return 0;
  return f;
}
void i();
int64_t k() {
  uint32_t l[][8][10] = {0, 4, 7, 1, 4, 3446557846};
  int64_t m[10];
  int h;
  for (h = 0; c + h < 10; h++)
    m[(int)d(5, l[0][0][5] - 3446557842, b - 187) + h] = 1;
  i(m);
  uint8_t *n = &b;
  uint8_t **o;
  o[0] = &n;
}
