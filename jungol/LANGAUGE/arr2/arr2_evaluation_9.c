#include <stdio.h>
int main()
{
    int arr[10][10] = {0,};
    int len, i, j;
    scanf("%d",&len);
    for (i = 0; i < len; i++)
    {
        arr[i][i] = 1;
        arr[i][0] = 1;   
    }
    for (i = 1; i < len; i++)
    {
        for (j = 1; j < len; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (i = len - 1; i >= 0; i--)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}