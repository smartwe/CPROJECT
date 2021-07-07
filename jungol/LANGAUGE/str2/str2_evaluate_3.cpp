#include <cstdio>
#include <cstring>

int main()
{
    char arr[51][101];
    int i = 0;

    while (1)
    {
        scanf("%s", arr[i]);
        if (arr[i][0] == '0') 
        {
            break;
        }


        i++;
    }
    printf("%d\n", i);
    
    for (int j = 0; j < i; j++)
    {
        if (j % 2 == 0)
        {
            printf("%s\n", arr[j]);
        }
    }

    return 0;
}