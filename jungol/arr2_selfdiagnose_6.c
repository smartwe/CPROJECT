#include <stdio.h>
int main()
{
    int score[5][4];
    int i, j;
    int pass;  
    int result1, result2, result3, result4, result5; 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d",&score[i][j]);   
        }
    }
    result1 = score[0][0] + score[0][1] + score[0][2] + score[0][3];
    result2 = score[1][0] + score[1][1] + score[1][2] + score[1][3];
    result3 = score[2][0] + score[2][1] + score[2][2] + score[2][3];
    result4 = score[3][0] + score[3][1] + score[3][2] + score[3][3];
    result5 = score[4][0] + score[4][1] + score[4][2] + score[4][3];
    if (result1/4 >= 80)
    {
        printf("pass\n");
        pass++;
    }
    else if (result1/4 < 80)
    {
        printf("fail\n");
    }
        if (result2/4 >= 80)
    {
        printf("pass\n");
        pass++;
    }
    else if (result2/4 < 80)
    {
        printf("fail\n");
    }
        if (result3/4 >= 80)
    {
        printf("pass\n");
        pass++;
    }
    else if (result3/4 < 80)
    {
        printf("fail\n");
    }
        if (result4/4 >= 80)
    {
        printf("pass\n");
        pass++;
    }
    else if (result4/4 < 80)
    {
        printf("fail\n");
    }
    if (result5/4 >= 80)
    {
        printf("pass\n");
        pass++;
    }
    else if (result5/4 < 80)
    {
        printf("fail\n");
    }
    printf("Successful : %d",pass);

    return 0;
}