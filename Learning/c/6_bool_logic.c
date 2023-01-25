#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true;
    bool b = false;

    printf("a&&b = %d\n",a&&b);
    printf("a||b = %d\n",a||b);
    printf("!a = %d\n",!a);

    return 0;
}
