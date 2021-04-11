#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("(%d - %d) ^ 2 = %.0lf\n", a, b, pow(a - b, 2));
    printf("(%d + %d) ^ 3 = %.0lf\n", a, b, pow(a + b, 3));
}