// Accidentally lost the source files. 
#include <stdint.h>
int a;
long b;
struct e {
  uint16_t f;
  uint64_t g;
  int32_t h
} static i = {65530};
void c(int d) {
  for (; a; a++)
    b *= d;
}
uint32_t j(struct e, uint16_t);
uint64_t k() { j(i, 0); }
uint32_t j(struct e, uint16_t) { c(i.f - 65528); }
