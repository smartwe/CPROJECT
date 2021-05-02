#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int index = 1;
    while(scanf("%s", s) != -1) {
        if(index % 2 == 1) printf("%s\n", s);
        index ++;
    }
}