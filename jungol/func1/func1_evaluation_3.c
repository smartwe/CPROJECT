#include <stdio.h>
int rectanglenum(int y, int x)
{
    return x * y;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1 ; i++){
        for(int j = 1; j < n + 1 ; j++){
            printf("%d ", rectanglenum(i, j));
        }
        puts("");
    }
}

/*
 * 3
 *   1 2 3
 * 1 1 2 3
 * 2 2 4 6
 * 3 3 6 9
 */