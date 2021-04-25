#include <stdio.h>
#include <string.h>

int main()
{
    int n, len;
    char str[101];
    scanf("%s", str);
    len = strlen(str);
    scanf("%d", &n);
    for (int i = len - 1; i > len - n - 1; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}