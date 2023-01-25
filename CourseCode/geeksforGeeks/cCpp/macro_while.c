#include <stdio.h>
#define Print(i, limit) \
  while (i < limit)     \
  {                     \
    printf("Geeks\n");  \
    i++;                \
  }

int main()
{
  int i = 0;
  Print(i, 3);
  return 0;
}