#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[101];
    scanf("%s", str);
    printf("%s", toupper(str));

    return 0;
}