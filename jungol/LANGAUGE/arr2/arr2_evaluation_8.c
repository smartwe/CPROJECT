# include <stdio.h> 
int main()
{ 
    int num[4][2]; 
    int i, j, sum; 
    for(i = 0; i < 4; i++) 
    { 
        for(j = 0; j < 2; j++) 
        { 
            scanf(" %d",&num[i][j]); 
        } 
    } for(i = 0; i < 4; i++) 
    { 
        sum = 0; 
        for(j = 0; j < 2; j++) 
        { 
            sum += num[i][j]; 
        } 
        printf("%d ",sum/2); 
    } 
    printf("\n"); 
    for(i = 0; i < 2; i++) 
    { 
        sum = 0; 
        for(j = 0; j < 4; j++) 
        { 
            sum += num[j][i]; 
        } 
        printf("%d ",sum/4); 
    } printf("\n"); 
    sum = 0; 
    for(i = 0; i < 4; i++) 
    { 
        for(j = 0; j < 2; j++) 
        { 
            sum += num[i][j]; 
        } 
    } 
    printf("%d ",sum/8); 
    return 0; 
}
