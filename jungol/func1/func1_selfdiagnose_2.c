#include <stdio.h>
void circle(int r)
{
    printf("%.2lf", r * r * 3.14);
}
int main()
{
    int r;
    scanf("%d",&r);
    circle(r);
}