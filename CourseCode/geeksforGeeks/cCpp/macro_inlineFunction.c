#include <stdio.h>

static inline int square(int x) { return x * x; }
int main()
{
  int a = 10;
  printf("%d\n", square(a));
  return 0;
}