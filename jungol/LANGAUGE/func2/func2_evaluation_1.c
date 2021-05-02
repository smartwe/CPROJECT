#include <stdio.h>
void in(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void out(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void bouble(int arr[], int size)
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int arr[16];
    int size;
    scanf("%d",&size);
    in(arr, size);
    bouble(arr, size);
    out(arr, size);

    return 0;
}