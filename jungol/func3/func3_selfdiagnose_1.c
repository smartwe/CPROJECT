#include <stdio.h>
void print(int n)
{
    if (n < 1)
    {
        return;
    }
    print(n - 1);
    printf("recursive\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}