#include <stdio.h>
#include <string.h>

int main()
{
    int len1, len2;
    char str1[20];
    char str2[20];

    scanf("%s %s", str1, str2);
    len1 = strlen(str1);
    len2 = strlen(str2);

    printf("%d", len1 + len2);

    return 0;
}