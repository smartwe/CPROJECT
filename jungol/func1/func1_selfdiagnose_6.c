#include <stdio.h>
int plus(int a, int b)
{
    return a + b;
}
int minus(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int main()
{
    int a, b;
    char func;
    scanf("%d",&a);
    scanf(" %c ",&func);
    scanf("%d",&b);
    if (func == '+')
    {
        printf("%d + %d = %d",a, b, plus(a, b));
    }
    else if (func == '-')
    {
        printf("%d - %d = %d", a, b, minus(a, b));
    }
    else if (func == '*')
    {
        printf("%d * %d = %d", a, b, multi(a, b));
    }
    else if (func == '/')
    {
        printf("%d / %d = %d", a, b, div(a, b));
    }
    else
    {
        printf("%d %c %d = %d", a, func, b, 0);
    }

    return 0;
}