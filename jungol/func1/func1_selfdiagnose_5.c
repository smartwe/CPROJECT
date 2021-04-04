#include <stdio.h>
int muti(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * muti(a,b - 1);
    }
}
int main()
{
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",muti(a, b));

    return 0;
}