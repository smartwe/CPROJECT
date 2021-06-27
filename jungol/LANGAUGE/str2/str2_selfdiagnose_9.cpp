#include <stdio.h>
#include <string.h>

int main()
{
    char tmp[20];
    char str[6][20];
    scanf("%s %s %s %s %s", str[0], str[1], str[2], str[3], str[4]);
    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4 - i;j++)
        {
            if (strcmp(str[j], str[j + 1]) < 0)
            {
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}