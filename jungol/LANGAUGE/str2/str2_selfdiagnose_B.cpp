#include <cstdio>
#include <cstring>
int main()
{
    int a, b, c, d, e;
    int t;
    int h = 3;
    char str[3208];
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sprintf(str, "%d%d%d%d%d", a, b, c, d, e);
    t = strlen(str);
    for (int i = 0; i <t; i++)
    {
        printf("%c", str[i]);
        if(i % 3 == 2)
        {
            printf("\n");
        }
    }
}