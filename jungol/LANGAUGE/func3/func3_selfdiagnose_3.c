#include <stdio.h>
int print(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + print(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", print(n));
}