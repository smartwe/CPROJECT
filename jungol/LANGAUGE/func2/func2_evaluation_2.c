#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    scanf("%lf %lf",&num1,&num2);
    if (num1 > num2)
    {
           printf("%.0lf", floor(sqrt(num1))- ceil(sqrt(num2)) + 1);
    }
    else 
    {
        printf("%.0lf",  floor(sqrt(num2)) - ceil(sqrt(num1))+ 1);
    }

    return 0;
}