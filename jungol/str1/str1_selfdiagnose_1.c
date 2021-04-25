#include <stdio.h>
int main()
{
    int a;
    char ch;
    while (1)
    {
        printf("ASCII code =? ");
        scanf("%d", &a);
        if (a < 128 && a > 32)
        {
            ch = a;
            printf("%c", ch);
        }
        else
        {
            break;
        }
        printf("\n");
    }
    return 0;
}