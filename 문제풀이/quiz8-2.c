#include <stdio.h>
int main()
{
    int gobhe;
    for (int i = 1; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        for (int j = 1; j < 10; j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
            if (j == i)
            {
                break;
            }
        }
        printf("\n");
    }
    
    return 0;
}