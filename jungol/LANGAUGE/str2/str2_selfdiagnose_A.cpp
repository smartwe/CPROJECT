#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    char str[21];
    double num;
    scanf("%s", str);
    num = atof(str);
    printf("%d\n", (int(num) * 2));
    printf("%.2lf", num);

    return 0;
}