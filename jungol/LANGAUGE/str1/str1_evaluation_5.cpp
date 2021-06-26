#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char str2[100];

    scanf("%s", str);
    scanf("%s", str2);

    if (strlen(str) > strlen(str2))
    {
        printf("%d", strlen(str));
    }
    else if (strlen(str) < strlen(str2))
    {
        printf("%d", strlen(str2));
    }
    else
    {
        printf("%d", strlen(str));
    }

    return 0;
}