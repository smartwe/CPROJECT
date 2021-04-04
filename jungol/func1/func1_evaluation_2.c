
#include <stdio.h>
void gaus(int num)
{
    int sum = 0;
    for (int i = num; i > 0; i--)
    {
        sum += i;
    }
    printf("%d",sum);
}
int main()
{
    int num;
    scanf("%d",&num);
    gaus(num);
}
/*----------------------------------------------------------------
#include <stdio.h>
int gaus(int num) { return -~num*num>>1; }
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d", gaus(num));
}
*/
/*
#include <stdio.h>
int gaus(int num) {
    if(num == 0)return 0;
    return num + gaus(num - 1);
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d", gaus(num));
}

#include <stdio.h>
int gaus(int num) { return num * (num + 1) / 2; }
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d", gaus(num));
}
//*/