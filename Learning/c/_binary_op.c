#include <stdio.h>

void print_bin(int a);
int main()
{
  int a = 10, b = 14;
  int c = a & b;
  print_bin(a);
  print_bin(b);
  print_bin(c);
  c = a | b;
  print_bin(c);
  c = a ^ b;
  print_bin(c);

  return 0;
}

void print_bin(int a)
{
  while (a)
  {
    if (a & 1)
      printf("1");
    else
      printf("0");
    a >>= 1;
  }
  printf("\n");
}