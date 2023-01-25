<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
#include <string.h>

#define INCREMENT(x) ++x
#define MULTIPLY(a, b) a *b
#define MERGE(a, b) a##b
#define get(a) #a
#define PRINT(i, limit)        \
    while (i < limit)          \
    {                          \
        printf("GeeksQuiz\n"); \
        i++;                   \
    }
#define square(x) x*x

int main(void)
{
    /* freopen("input","r",stdin); */
    /* freopen("output","w",stdout); */
    char *ptr = "Geeksforgeeks";
    int x = 10, y = 4, i = 0;
    float a = 10.4, b = 4;
    printf("%s\n", INCREMENT(ptr));
    printf("%d\n", INCREMENT(x));
    printf("%f\n", MULTIPLY(a, b));
    printf("%d\n", MULTIPLY(x, y));
    printf("%d\n", MULTIPLY(2 + 3, 3 + 5)); // it will calculate 2+3*3+5 = 2+9+5 = 16
    printf("%d\n", MULTIPLY(3, 5));         // it will calculate 2+3*3+5 = 2+9+5 = 16
    printf("%d\n", MERGE(1, 2));            // it will make 12
    printf("%s\n", get(Geeksforgeeks));     //Geeksforgeeks is changed to "Geeksforgeeks"
    PRINT(i, 3);
    printf("%f", square(a));

    return 0;
}
=======
#include <stdio.h>
#include <math.h>
#include <string.h>

#define INCREMENT(x) ++x
#define MULTIPLY(a, b) a *b
#define MERGE(a, b) a##b
#define get(a) #a
#define PRINT(i, limit)        \
    while (i < limit)          \
    {                          \
        printf("GeeksQuiz\n"); \
        i++;                   \
    }
#define square(x) x*x

int main(void)
{
    /* freopen("input","r",stdin); */
    /* freopen("output","w",stdout); */
    char *ptr = "Geeksforgeeks";
    int x = 10, y = 4, i = 0;
    float a = 10.4, b = 4;
    printf("%s\n", INCREMENT(ptr));
    printf("%d\n", INCREMENT(x));
    printf("%f\n", MULTIPLY(a, b));
    printf("%d\n", MULTIPLY(x, y));
    printf("%d\n", MULTIPLY(2 + 3, 3 + 5)); // it will calculate 2+3*3+5 = 2+9+5 = 16
    printf("%d\n", MULTIPLY(3, 5));         // it will calculate 2+3*3+5 = 2+9+5 = 16
    printf("%d\n", MERGE(1, 2));            // it will make 12
    printf("%s\n", get(Geeksforgeeks));     //Geeksforgeeks is changed to "Geeksforgeeks"
    PRINT(i, 3);
    printf("%f\n", square(a));

    return 0;
}
>>>>>>> 6c3981b4cc19460cb2d180aa93d2ba0f1e29f7eb
