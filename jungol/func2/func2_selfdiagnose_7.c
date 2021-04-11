#include <stdio.h>
#define swap(x, y) {int z = x; x = y; y = z;}
#define n 5
int main()
{
    int arr[11];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        for(int k = 0; k < 9; k++)
        {
            if (arr[k] < arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
        for(int k = 0; k < 10; k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }   
}