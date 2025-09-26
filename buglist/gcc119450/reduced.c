long *a;
int b;
void c() {
  unsigned d = b >> 30;
  a = (long *)d;
  if (*a & 1 << 30)
    *a = 0;
}
void main() {}

/* Bisection: 678e6c328c77db383431751bcfcf867b02369bd6 */
