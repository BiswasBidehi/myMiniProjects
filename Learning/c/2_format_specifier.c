#include <stdio.h>
#include <stdlib.h>

int main()
{
    // print integer
    int b = -60280;
    printf("%%d Integer Value is %d\n", b);
    printf("%%i Integer Value is %i\n", b);
    printf("%%8d Integer Value is \'%8d\'\n", b);
    printf("%%-8d Integer Value is \'%-8d\'\n", b);

    
    // print unsigned integer
    unsigned u = 33;
    printf("%%u Unsigned integer Value is %u\n", u);
    printf("\n");

    // print long integer
    long li = -324231412314312;
    printf("%%ld Integer long Value is %ld\n", li);

    // print unsigned long integer
    unsigned long ul = 3373947123497912379;
    printf("%%lu Integer Value is %lu\n", ul);
    printf("\n");

    // print long long integer
    long long ll = -324231412314312;
    printf("%%lld Integer long long Value is %lld\n", ll);

    // print unsigned long long integer
    unsigned long long ull = 3346186843686434723;
    printf("%%llu Unsigned long long integer Value is %llu\n", ull);
    printf("\n");

    // print octal number
    int oct = 015;
    printf("%%o Octal Value is %o\n", oct);
    printf("\n");

    // print hexadecimal number
    int int_hex = 0x15;
    printf("%%x Hex Value is %x\n", int_hex);
    printf("%%X Hex Value is %x\n", int_hex);
    printf("\n");

    int hex = 15;
    printf("%%x Hex Value is %x\n", hex);
    printf("%%X Hex Value is %x\n", hex);
    printf("\n");

    // print floating poing number
    float f = 44 / 3.0;
    printf("%%f Floating value is %f\n", f);
    printf("%%10.3f Floating value is \'%10.3f\'\n", f);
    printf("%%-10.3f Floating value is \'%-10.3f\'\n", f);
    printf("%%g Floating value is %g\n", f);
    printf("%%e Floating value is %e\n", f);
    printf("%%E Floating value is %E\n", f);
    printf("\n");

    // print long float or double numbers
    double dd = 44 / 3.0;
    printf("%%lf Double value is %lf\n", dd);
    printf("%%g Double value is %g\n", dd);
    printf("%%e Double value is %e\n", dd);
    printf("%%E Double value is %E\n", dd);
    printf("\n");

    // print character
    int c = 68;
    printf("Value in Character is %c\n", c);
    printf("\n");

    // print string
    char *str = "Hello world";
    printf("%%s String print \"%s\".", str);
    printf("\n");
    printf("%%15s String print \"%15s\".", str);
    printf("\n");
    printf("%%-15s String print \"%-15s\".", str);
    printf("\n");

    // print pointer or address
    printf("\n");
    int i = 17;
    int *p = &i;
    printf("%%p Print address of i %p\n", &i);
    printf("%%d Value of i is %d\n", i);
    printf("%%d Value of i using pointer is %d", *p);

    printf("\n");

    return 0;
}
