#include <cstdio>
#include <cstring>
using namespace std;



int main()
{
    char str[101];
    scanf("%s", str);
    {
        if (strstr(str, "c") == 0)
            {
                printf("No ");
            }
        else
            {
                printf("Yes ");
            }
    }
    {
        if (strstr(str, "ab") == 0)
            {
                printf("No");
            }
        else
            {
                printf("Yes");
            }
    }

    return 0;
}