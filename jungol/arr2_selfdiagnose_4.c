#include <stdio.h>
int main()
{
    int i;
    int arr[4][2] = {
                    {5, 8, 10, 6, 4},
                    {11, 20, 1, 13, 2},
                    {7, 29, 14, 22, 3}
                    };
    for (i = 0; i < 5; i++)
    {  
       printf("%2d",arr[i][0]);
       printf("%2d",arr[i][1]);
       printf("%2d",arr[i][2]); 
    }
    return 0;
}