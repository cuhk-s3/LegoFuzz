int printf(const char *, ...);
short a;
int b;
int *const c = &b;
static int *d = &b;
long e = 1;
char(f)(char g, char h) { return g - h; }
int main() {
  int *i = &b;
  for (; a != 2; ++a) {
    *c ^= 1;
    if (*d)
      ;
    else {
      *c = f(*i, 1) || *i;
      if (*c)
        e = 0;
    }
  }
  printf("%d\n", (int)e);
}

/* Bisection: e8febb641415fd80eabce1c4fdf2d4a4b411213b */
