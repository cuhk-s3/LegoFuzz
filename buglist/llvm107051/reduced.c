#include <stdint.h>
int32_t *c;
int8_t ****d;
uint64_t g;
int a();
long b(long, long h, long p3) {
  long e;
  int f = 0;
  if (h) {
    e = h;
    f = 1;
  }
  if (e > p3)
    f = 2;
  switch (f) {
  case 1:
    e++;
  case 2:
    e--;
  }
  if (e < h)
    e = h;
  return e;
}

uint8_t div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2)
{
  return (ui1 / ui2);
}

uint64_t j() {
  uint16_t k[8];
  int i;
  for (i = 0; *c + ****d + (int)g + i < 8; i++)
    k[b(0, g, 0)] = 6;
  *c = div_func_uint8_t_u_u(k[6], a());
}
