int printf(char *, ...);
int a, b = 3;
int c(int d, int e) {
  if (d & 1)
    if (e || d & 2)
      return 1;
    else
      return 0;
  return 0;
}
int main() {
  a = c(b - 98, b);
  printf("%d\n", a);
}
