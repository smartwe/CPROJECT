#include <stdio.h>
void func(int n)
{
    if(n == 0) return;
    func(n / 2);
    printf("%d ", n);   
}
int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    
    return 0;
}