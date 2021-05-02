#include <stdio.h>
#define sev 7

int main()
{
    int tmp;
    int arr[sev + 1];
    for (int i = 0; i < sev; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < sev-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < sev; i++)
    {
        printf("%d ",arr[i]);
    }

}