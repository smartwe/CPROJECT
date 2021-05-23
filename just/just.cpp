#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    while (a + b <= 100)
    {
        printf("%d + %d = %d\n", a, b, a + b);
        a = b;
        b = a + b;
    }

    return 0;
}