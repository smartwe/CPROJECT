#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[101];
    scanf("%s", str);  
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]))
        {
            printf("%c", toupper(str[i]));
        }
    }

    return 0;
}