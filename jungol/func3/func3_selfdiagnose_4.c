#include <stdio.h>
#include <math.h>

int multi(int a)
{
    if(a <= 0) return 0;
    return multi(a / 10) + (a % 10) * (a % 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", multi(n));

    return 0;
}