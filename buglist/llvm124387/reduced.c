void printf();
int a, b;
void c(char d) { a = d; }
int e(int d) {
  if (d < 0)
    return 1;
  return 0;
}
int f() {
  if (b)
    return 0;
  return 1;
}
int g(int d) {
  int h = 0;
  if (3 + d)
    h = f() - 1 - 1;
  return e(h) + h + h;
}
int main() {
  int i = g(0);
  c(i);
  printf("%X\n", a);
}
