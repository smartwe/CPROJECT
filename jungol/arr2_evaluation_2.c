#include <stdio.h>

int main()
{
    int arr[11];
    int i, score;

    for (i = 0; i < 100; i++)
    {
        scanf("%d",&score);
        arr[score/10]++;
        if (score == 0)
        {
            break;
        }
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d : %d person\n",i + 1,arr[i + 1]);
    }
}