int printf(const char *, ...);
char a, b;
int c;
char *e = &b;
int f(char *g, int *k) {
  char *d = g + *k;
  for (; *d && *d <= ' '; d++)
    ;
  if (*d)
    return 0;
  return 1;
}
int l(int g) {
  char h[] = {a, a, a};
  int i[] = {g};
  int j = f(h, i);
  return j;
}
long m() {
  *e = 255;
  for (; l(b + 1);)
    return 0;
  for (;;)
    ;
}
int main() {
  m();
  printf("%d\n", c);
}
