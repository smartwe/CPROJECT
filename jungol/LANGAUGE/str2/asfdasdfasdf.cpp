#include <cstdio>
#include <cstdlib>
#include <cstring>
#define time 220000000

int str[time];
int str2[time];

int main()
{
    for (int i = 0;i<time;i++)
    {
        str[i] = 1;
        str2[i] = 1;
    }
    
    for (int i = 0; i < time; i++)
    {
        printf("%d", str[i]);
        printf("%d", str2[i]);
    }
}