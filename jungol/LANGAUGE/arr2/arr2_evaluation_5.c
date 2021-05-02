#include <stdio.h>

int main()
{
    int arr[4][3];
    int total[4];
    int i, j, sum = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%dclass? ", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf(" %d",&arr[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        total[i] = sum;
        sum = 0;
    }
    for (i = 0; i < 4; i++)
    {
        printf("%dclass : %d\n",i + 1,total[i]);
    }
    return 0;
}