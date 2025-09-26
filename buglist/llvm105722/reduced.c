#include <stdint.h>
int a;
long b;
static int32_t c;
void d(int e, int h) {
  int f = a = 1;
  for (; a <= e; a++)
    f *= a;
  a = 0;
  for (; a < h; a++)
    b *= f;
}
long g() {}
int32_t i() {
  for (; g();)
    for (c = 3;;)
      ;
}
uint16_t j() { d(c + 1, c + 6); }
