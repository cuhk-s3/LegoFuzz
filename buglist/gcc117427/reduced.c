int a, b;
int *c;
long d;
int e(int g) {
  if (g && a)
    return 1;
  return 0;
}
void h() {
  int f = e(d);
  b = f;
  for (unsigned long i = 0; i < d; i++)
    c[i] = 0;
}

/* Bisection: 4af8db3eca12b2db3753ce4b098cbd0ae32b4796 */
