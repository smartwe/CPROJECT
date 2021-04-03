#include <stdio.h>

int main()
{
    int arr[100];
    int i, score;

    for (i = 0; i < 100; i++)
    {
        scanf("%d",&score);
        arr[score]++;
    }
}