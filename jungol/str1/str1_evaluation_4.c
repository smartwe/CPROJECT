#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char want;
    int i2, len;
    int cnt = 0;
    scanf("%s %c", str, &want);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == want)
        {
            printf("%d", i);
            
            break;
        }
        else 
        {
            cnt++;
        }
    }
    if (cnt == len)
    {
        printf("No");
    }

    return 0;

}