#include <stdio.h>
#include <math.h>
int main()
{
    int n; 
    double ren;
    scanf("%d", &n);
    ren = sqrt(n);
    
    for (int i = 0; i < ren; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}