#include <stdio.h>
int main()
{
    int arr[2][4];
    int arr2[2][4];
    int arr3[2][4];
    int i;
    int j;
    printf("first array\n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d",&arr[i][0]);
        scanf("%d",&arr[i][1]);
        scanf("%d",&arr[i][2]);
        scanf("%d",&arr[i][3]);
    }
    printf("second array\n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d",&arr2[i][0]);
        scanf("%d",&arr2[i][1]);
        scanf("%d",&arr2[i][2]);
        scanf("%d",&arr2[i][3]);
    }
    for (i = 0; i < 2; i++)
    {
        arr3[i][0] = arr[i][0] * arr2[i][0];
        arr3[i][1] = arr[i][1] * arr2[i][1];
        arr3[i][2] = arr[i][2] * arr2[i][2];
        arr3[i][3] = arr[i][3] * arr2[i][3];  
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}