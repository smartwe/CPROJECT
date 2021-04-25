#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str;
    while(1)
    {
        scanf(" %c", &str);
        if (isalpha(str))
        {
            printf("%c\n", str);
        }
        else if (isdigit(str))
        {
            printf("%d\n", str);
        }
        else
        {
            break;
        }
    }
    return 0;
}