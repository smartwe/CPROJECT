#include <stdio.h>
int main()
{
    int n, type;
    scanf("%d %d", &n, &type);
    if (type == 1)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    else if (type == 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 1; j < n + 1; j++)
                {
                    printf("%d ", j);
                }
                printf("\n");
            }
            else if (i % 2 == 1)
            {
                for (int j = n; j >= 1; j--)
                {
                    printf("%d ", j);
                }
                printf("\n");
            }
        }
    }
    else if (type == 3)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                printf("%d ", i * j);
            }
            printf("\n");
        }
    }

    return 0;
}