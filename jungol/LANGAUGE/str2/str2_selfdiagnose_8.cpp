#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[4][14];
    scanf("%s %s %s", str[0], str[1], str[2]);
    {
    if (strcmp(str[0], str[1]) < 0)
    {
        {
        if (strcmp(str[0], str[2]) < 0)
        {
            printf("%s", str[0]);
        }
        else
        {
            printf("%s", str[2]);
        }
        }
    }
    else
    {
        {
        if (strcmp(str[1], str[2]) < 0)
        {
            printf("%s", str[1]);
        }
        else
        {
            printf("%s", str[2]);
        }
        }
    }
    }

    return 0;
}