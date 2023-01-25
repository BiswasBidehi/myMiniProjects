// #include <stdio.h>

// int add(void){
//   int a = 13;
//   auto int b = 48;
//   return a+b;
// }
// int main ()
// {
//   printf("%d",add());

//   return 0;
// }
#include <stdio.h>

int main()
{
  auto int j = 1;
  {
    auto int j = 2;
    {
      auto int j = 3;
      printf("%d", j);
      printf("\n");
    }
    printf("%d", j);
    printf("\n");
  }
    printf("%d", j);
  printf("\n");

  return 0;
}