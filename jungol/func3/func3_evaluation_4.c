#include <stdio.h>
int maker(int n)
{
    if (n < 3 )
    {
        printf("%d ", n);
        return 0;
    }
    printf("%d ", (maker(n - 1) * maker(n - 2)) % 100);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", maker(n));

    return 0;
}