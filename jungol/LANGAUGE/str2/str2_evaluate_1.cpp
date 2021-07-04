#include <cstdio>
#include <cstring>

int main()
{
    char str[101];
    int len;
    fgets(str, 101, stdin);
    len = strlen(str);
    while(str[len-1] == '\r' || str[len-1] == '\n')
    {
        len -= 1;
        str[len] = '\0';
    }
    for (int i = 0; i < ; i++)
    {
        
    }
}