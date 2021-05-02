#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);

    int num, i;
    while(1)
    {
        scanf("%d", &num);
        if(num > strlen(a)) 
        {
            num = strlen(a);
        }
        for(i = num - 1; i < strlen(a) - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[i] = 0;
        printf("%s\n", a);
        if(i == 1) 
        {
            break;
        }
    }
}