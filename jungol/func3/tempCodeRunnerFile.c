#include <stdio.h>

int i = 0;

void func(int n)
{
    if (n == 1)
    {
        printf("%d", i);
        return;
    }
    
    if (n % 2 == 0)
    {
        i++;
        func(n / 2);
    }
    i++;
    func(n / 3);
}
int main()
{
    int n;
    scanf("%d", &n);
    func(n);
   
    return 0;
}