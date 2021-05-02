#include <stdio.h>
int main()
{
    int score[5][4];
    int i, j;
    int pass;
    int total[5] = {0,};
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d",&score[i][j]);
            total[i] = total[i] + score[i][j];   
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (total[i]/4 >= 80)
        {
            printf("pass\n");
            pass++;
        }
        else if(total[i]/4 < 80)
        {
            printf("fail\n");
        }   
    }
    printf("Successful : %d", pass);
    return 0;
}