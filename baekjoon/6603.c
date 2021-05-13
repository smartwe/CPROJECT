#include <stdio.h>

int func(int j)
{
    if (j == 0)
    {
        return 1;
    }
    return j * func(j - 1);
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", func(n));

    return 0;
}