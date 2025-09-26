unsigned long a;
void b() {
  unsigned long e = a;
  int c = e, d = c < 100 ? c : 0;
  if (d + (int)e & 608)
    while (e & 608)
      e <<= 1;
}
