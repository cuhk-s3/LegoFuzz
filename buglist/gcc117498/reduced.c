int printf(const char *, ...);
int a, d, f;
char g;
void *malloc(unsigned long);
int b() {
  int *c = malloc(sizeof(int));
  if (c == 0)
    return -1;
  return 1;
}
void e(int h, int i, char *k, char *m) {
  for (; d < i; d += 2) {
    int j = 0;
    for (; j < h; j++)
      m[j] = k[4 * j];
  }
}
void l(long h) {
  char n = 0;
  e(h, 4, &n, &g);
}
int main() {
  f = b();
  l((unsigned char)f - 4);
  printf("%X\n", a);
}
