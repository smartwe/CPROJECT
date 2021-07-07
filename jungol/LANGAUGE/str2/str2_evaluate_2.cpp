#include <cstdio>
#include <cstring>

int main()
{
    int cnt = 0;
    char w;
    char a[6][120] = {"flower", "rose", "lily", "daffodil", "azalea"};
    
    scanf("%c", &w);

    for (int i = 0; i < 5; i++)
    {
        if (a[i][1] == w|| a[i][2] == w)
        {
            printf("%s\n", a[i]);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", cnt);
    }
}