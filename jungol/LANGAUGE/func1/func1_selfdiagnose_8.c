#include <stdio.h>
void ggdan(int x)
{
    printf("== %ddan ==\n",x);
    for (int j = 1; j < 10; j++)
    {
        printf("%d * %d = %2d\n", x, j, x * j);
    }
}
int main()
{
    int a , b;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    for(int i = a;i <= b;i++){
        ggdan(i);
        puts("");
    }
}