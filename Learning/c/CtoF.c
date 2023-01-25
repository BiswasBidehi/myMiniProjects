#include <stdio.h>

int main(){
    float fahr, celsious;
    scanf("%f",&fahr);
    celsious = 5 *(fahr -32)/9;
    printf("Temperature is %.2f celsious",celsious);
    printf("\n");
    return 0;
}