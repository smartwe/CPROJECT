#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    scanf("%lf %lf",&num1,&num2);

    printf("%.0lf", fabs(ceil(sqrt(num1)) - ceil(sqrt(num2))) + 1);

    return 0;
}