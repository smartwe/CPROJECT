#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, tmp;
    scanf("%lf %lf %lf", &a, &b, &c);
    double arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    for(int k = 0; k < 3; k++){
        for (int i = 0; i < 2; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    tmp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = tmp;
                }
            }
    }
    printf("%.0lf %.0lf %.0lf", ceil(arr[2]), floor(arr[0]), round(arr[1]));

    return 0;
}