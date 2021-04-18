#include <stdio.h>
int maker(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return maker(n / 2) + maker(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", maker(n));

    return 0;
}