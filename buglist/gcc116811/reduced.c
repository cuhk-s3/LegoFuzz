#include <stdint.h>
int a, i;
uint8_t **j, **k;
long b(long unsigned c, int d) {
  if (c == 0)
    return 0;
  long unsigned e = (c + d - 1) / d;
  a = 0;
  for (; a < e; a++)
    ;
  return 0;
}
void f(int, int g, int h) { b(g, h); }
int32_t *l();
static uint64_t m(int32_t *, uint8_t, int32_t *);
int32_t *n();
static int16_t o() { int32_t *p = l(m(n(), **j, p)); return 0;}
uint64_t m(int32_t *, uint8_t q, int32_t *) {
  **k = i || q;
  f(0, q - 1, q + 1);
  return 0;
}
int main() { o(); }

/* Bisection: 2545a1abb77bd62c1f7dea8245dc01671b0f7ce1 */
