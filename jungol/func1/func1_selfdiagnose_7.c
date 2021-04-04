#include <stdio.h>
void ihs(int *a, int *b)
{
    if (*a < *b)
    {
        *b = *b / 2; 
        *a = *a * 2;
    }
    else
    {
        *a = *a / 2;
        *b = *b * 2;
    }
}
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    ihs(&a, &b);
    printf("%d %d", a, b);
}