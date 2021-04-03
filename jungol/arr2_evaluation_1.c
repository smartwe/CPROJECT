#include <stdio.h>

int arr[10];

int main()
{
    int num, i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&num);
        arr[num]++;
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d : %d\n",i + 1, arr[i + 1]);
    }
    return 0;
}