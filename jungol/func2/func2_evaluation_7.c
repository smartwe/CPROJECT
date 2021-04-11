#include <stdio.h>
#include <math.h>
#define pi 3.141592
int main()
{
    double r;
    printf("radius : ");
    scanf("%lf", &r);
    printf("area = %.3lf", pow(r, 2) * pi);
}