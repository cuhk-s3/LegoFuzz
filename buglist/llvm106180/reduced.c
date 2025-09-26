#include <stdint.h>
long a, c;
unsigned d;
int32_t g;
uint8_t h[];
long b(long p1, long k) {
  long e = k;
  int b = 0;
  while (e) {
    e /= 10;
    b++;
  }
  for (int f = 0; f < b; f++)
    p1 *= 10;
  a = p1 + k;
  return a;
}
long i(int p1, int, int l) {
  int j = l / p1;
  for (int f = 0; f < p1; f++) {
    if (d > l)
      break;
    c = d += j;
  }
}
uint32_t m() {
  for (g = 8; b(35, 46) - 3546 + g >= 0; g--)
    ;
  h[i(g + 1, 0, -4294967221)];
}
