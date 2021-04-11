#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0;
    double sum2= 0;
    double arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    printf("%.0lf\n", round(sum / 3));
    for (int i = 0; i < 3; i++)
    {
        arr[i] = round(arr[i]);
        sum2 += arr[i]; 
    }
    printf("%.0lf", sum2 / 3);
}