#include <stdio.h>
int main()
{
    int num1, num2;
    int i;
    int arr[10];
    scanf("%d",&num1);
    scanf("%d",&num2);
    arr[0] = num1;
    arr[1] = num2;
    for (i = 2; i < 10; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i] % 10);
    }
    return 0;
}