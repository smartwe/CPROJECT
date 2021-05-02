#include <stdio.h>
#include <stdbool.h>
bool a(int b)
{
    if (b <= 31 && 0 < b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool b(int c)
{
    if (c <= 30 && 0 < c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool c(int d)
{
    if (d <= 29 && 0 < d)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int m, d;
    scanf("%d",&m);
    scanf("%d",&d);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (a(d))
        {
            printf("OK!");
        }
        else
        {
            printf("BAD!");
        }
    }
    else if (m == 2)
    {
        if (c(d))
        {
            printf("OK!");
        }
        else
        {
            printf("BAD!");
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (b(d))
        {
            printf("OK!");
        }
        else
        {
            printf("BAD!");
        }
    }
    else
    {
        printf("BAD!");
    }
}