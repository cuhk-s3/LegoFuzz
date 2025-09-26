struct a {
  struct a *b
};
int c, g, i;
void *malloc();
int d() {
  struct a *e = malloc(c);
  if (e == 0)
    return 1;
  for (int f = 0; f < c; f++)
    e[f].b = 1 ? &e[1] : 0;
}
int h() {
  for (; g; g++)
    ;
  return 0;
}
void j() {
  for (;;)
    for (; h() + i; i++)
      d();
}
void main() {}

/* Bisection: 5a3e3675f6be3c49fb1a305202888cce4d916ba6 */
