#include <stdio.h>
void rectanglenum(int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d ",i * num + j + 1);
        }
        printf("\n");
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    rectanglenum(num);
}