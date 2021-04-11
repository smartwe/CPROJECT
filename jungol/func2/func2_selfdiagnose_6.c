#include <stdio.h>
#include <math.h>
#define one 1
#define two 2
#define three 3

int main()
{
    printf("%d + %d = %d", one, one, one + one);
    printf("%d + %d = %d", one, two, one + two);
    puts("%d + %d = %d", one, three, one + three);
    puts("%d + %d = %d", two, one, two + one);
    puts("%d + %d = %d", two, two, two + two);
    puts("%d + %d = %d", two, three, one + three);
    puts("%d + %d = %d", three, one, three + one);
    puts("%d + %d = %d", three, two, three + two);
    puts("%d + %d = %d", three, three, three + three);

    return 0;
}