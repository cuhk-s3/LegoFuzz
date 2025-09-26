int a;
double b;
long c;
int d(long f, long g) {
  if (f + g)
    return 1;
  for (long e = 0; e < g; e++)
    *(char *)e = 5;
  return 0;
}
int h(int f) {
  double i = 0.270112271089232341485679099e4;
  b = 0.1e1;
  for (; c; c--) {
    i = i * (80 + f) * (9 + f) + a;
    a = 0;
    b = b * f * (d(-42, f) + f) + 0.11623987080032122878585294e22;
  }
  return i / b;
}
void main() {}

/* Bisection: d57884011e8c57b118b831614b692ba4bc8b5aca */
