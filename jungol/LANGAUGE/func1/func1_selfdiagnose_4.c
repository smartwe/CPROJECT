#include <stdio.h>
int max(int a,int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d",max(max(a,b),c));

    return 0;
}