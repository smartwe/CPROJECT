#include <stdio.h>

int func(int total)
{
   if (total % 10 == 0)
   {
       return func(total / 10) * 1;
   }
   return func(total / 10) * func(total % 10);
}

int main()
{
    int n, m ,o;
    scanf("%d %d %d", &n, &m, &o);
    printf("%d", func(n * m * o));

    return 0;
}