#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int f(double c, double d) 
{
    if (fabs(c) < fabs(d))
    {
        return c;
    }
    else
    {
        return d;
    }
}
int i(int a, int b)
{
    if (abs(a) < abs(b))
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a, b;
    double c, d;
    scanf("%d %d", &a, &b);
    scanf("%lf %lf", &c, &d);
    printf("%d",i(a, b));
    printf("%.2lf",f(c, d));

    return 0;
}