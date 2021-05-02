#include <stdio.h>
void printer()
{
    puts("~!@#$^&*()_+|");
}
int main()
{
    int num, i;
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        printer();
    }
}