#include <stdio.h>

int main()
{
    int arr[11];
    int i, score;
    for (i = 10; i >= 0; i--)
    {
        arr[i] = 0;
    }
    for (i = 0; i < 100; i++)
    {
        scanf("%d",&score);
        arr[score/10]++;
        if (score == 0)
        {
            break;
        }
    }

    for (i = 10; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            printf("%d : %d person\n",i * 10 ,arr[i]);
        }
    }
}