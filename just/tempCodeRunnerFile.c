/*
#include <stdio.h>
int main()
{
     for (int i = 0; i < 10; i++)
     {
           for(int j = 0; j < 10; j++)
                {
                    if (10 * i + j != 0)
                    {
                     printf("%d ", i * 10 + j);   
                    }
                }
    }
    return 0;
}
*/
#include <stdio.h>
int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
        {
            printf("\n")
        }
        if (i != 0)
        {
            printf("%d", i)
        }
    }
}