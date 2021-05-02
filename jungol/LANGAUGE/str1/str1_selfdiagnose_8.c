#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    int len, cnt = 0;
    //scanf("%[^\n]", str);
    // gets(str);
    fgets(str, 100 * sizeof(char), stdin);
    /*for (int i = 0; i < 100; i++)
    {
        scanf(" %c", &str[i]);
        if (str[i] == 10)
            {
                break;
            }
    }*/
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 32)
        {
            cnt++;
        }
    }
    printf("%d", cnt + 1);

    return 0;
}