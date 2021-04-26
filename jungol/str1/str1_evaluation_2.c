#include <stdio.h>
int main()
{
    char str[100];

    scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}