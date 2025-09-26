int printf(const char *, ...);
static char a;
static signed char *b = &a;
static int c;
short d;
void e() {
  short f[8];
  signed char **g[] = {&b, &b};
  c = 0;
  for (; c < 8; c = 81 + 462704684 + *b - 462704765 + c + 1)
    f[c] = 0;
  d = f[5];
}
int main() {
  e();
  printf("%d\n", c);
}

/* Bisection: df4a615c988f3ae56f7e68a7df86acb60f16493a */
