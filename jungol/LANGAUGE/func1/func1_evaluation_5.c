#include <stdio.h>

int arr[4][3];

int score(int idx)
{
    return arr[idx][0] + arr[idx][1] + arr[idx][2];
}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
            arr[3][j] += arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        printf("%d %d %d %d\n", arr[i][0], arr[i][1], arr[i][2], score(i));
    }
}