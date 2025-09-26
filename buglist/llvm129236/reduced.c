char a;
struct b {
  short c;
  char d;
  long e;
  int f
} static g;
int h;
void i(struct b j) {
  char k;
  int l;
  for (; j.d; --j.d) {
    l = g.c == 0 ? 0 : 4294967295U % g.c;
    k = l >= 2 || a >> l ? 0 : l;
    h = k;
  }
}
void m() { i(g); }
