#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char str[100], tmp;

    scanf("%s", str);
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        tmp = str[len - 1];
        for (int j = len - 1; j > 0; j--)
        {
            str[j] = str[j - 1];
        }
        str[0] = tmp;
        printf("%s \n", str);
    }

    return 0;
}