int a, b;
int c(int d, int *e) {
  a = 0;
  for (; a < d; a++)
    b += e[-a];
  int f = c(33, &f);
}
void main() {}

/* Bisection: 3f05d70389f523cf53f9b8fdf56570e8a6ecdb8b */
