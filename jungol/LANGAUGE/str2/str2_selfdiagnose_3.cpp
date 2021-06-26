#include <bits/stdc++.h>
using namespace std;

#define time 10
#define len 20

int main()
{
    int i, j;
    char q;
    int vocalen;
    char str[11][21];
    for(i = 0; i < time; i++)
    {
            scanf("%s",str[i]);
    }
    scanf(" %c", &q);
    for (i = 0; i < time; i++)
    {
        vocalen = strlen(str[i]) - 1;
        if (str[i][vocalen] == q)
        {
            printf("%s\n", str[i]);
        }
    }
}