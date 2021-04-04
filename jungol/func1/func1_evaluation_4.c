#include <stdio.h>

int cal(int a, int b)
{
    return a * a - b * b;
}

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    if(a<b) //a^=b^=a^=b;
    printf("%d",cal(b, a));
    printf("%d",cal(a, b));
}