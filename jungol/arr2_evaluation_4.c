#include <stdio.h>
int main()
{
    int arr[4][3] = {{3, 5, 9}, {2, 11, 5}, {8, 30, 10}, {22, 5, 1}};
    int i ,j;
    int sum = 0;
    for (i = 0; i < 4 ; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("%d",sum);
}