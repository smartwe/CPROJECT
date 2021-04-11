#include <stdio.h>
#include <math.h>

int main()
{
    int arr[6];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += abs(arr[i]);
    }
    printf("%d",sum);
    
    return 0;
}