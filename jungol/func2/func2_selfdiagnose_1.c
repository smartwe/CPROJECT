#include <stdio.h>
void in(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}
void smprt(int arr[],int size)
{
    int tmp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int main(void)
{
    int size;
    scanf("%d",&size);
    int arr[10];
    in(arr, size);
    smprt(arr, size);
    print(arr,size);

    return 0;
}