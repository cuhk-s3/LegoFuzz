#include <stdint.h>
#define UNDEFINED(x) ((x), 0)
long b;
static int64_t j = 1;
static int64_t *k = &j;
static int64_t **l = &k;
int64_t m;
static uint64_t n;
int16_t ***o;
static int64_t ***p = &l;
uint64_t **q;

uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2)
{
  return 
#ifndef UNSAFE
    (ui2 == 0) ? 
    (UNDEFINED(ui1)) : 
#endif
    (ui1 % ui2);
}

int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2)
{
  return 
#ifndef UNSAFE
    ((si2 == 0) || ((si1 == INT64_MIN) && (si2 == (-1)))) ? 
    (UNDEFINED(si1)) : 
#endif
    (si1 % si2);
}

int a(int, int, int, int, int) {}
long c(int d, int *e) {
  switch (d) {
  case 9:
    return b;
  case 8:
    return *e;
  }
}
long f(int g, long, int h) {
  long i = c(g, &h);
  return i;
}
int32_t r() { int32_t *s[] = {&k, &m}; }
int32_t t(int32_t *aa) {
  uint64_t ab = 2599693332;
  uint8_t ac = 142;
  for (; n <= 4; n++)
    *aa = (safe_mod_func_uint16_t_u_u(
               safe_mod_func_int64_t_s_s(a(0, 0, 0, 0, **l + 20) + **l, **q),
               ***o |= f(**l, 0, ***p)),
           **l + ac + ab - -1695273821 + *aa);
}
