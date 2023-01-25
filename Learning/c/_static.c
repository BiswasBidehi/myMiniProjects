#include <stdio.h>

int sum();

int main()
{
    printf("%d\n",sum());
    printf("%d\n",sum());
    printf("%d\n",sum());
    printf("%d\n",sum());
}

int sum(){
    static int a = 0;
    a++;
    return a;
}
