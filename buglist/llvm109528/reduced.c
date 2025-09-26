#include <stdint.h>
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2)
{
  return ui1 - ui2;
}
long a;
static int8_t c;
void b(long d, int f) {
  int e = 0;
  for (; e < 64; e++)
    if (e - f)
      a |= e >> f;
    else
      a |= d & e;
}
uint32_t g() {
  b(6, c);
  for (;; c = safe_sub_func_uint64_t_u_u(c, 4))
    ;
}
