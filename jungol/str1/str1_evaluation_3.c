#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    
    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i]))
        {
            if (isupper(str[i]))
            {
                str[i] = tolower(str[i]);
            }
            printf("%c", str[i]);
        }
        else if (isdigit(str[i]))
        {
            printf("%c", str[i]);
        }
    }
    
}