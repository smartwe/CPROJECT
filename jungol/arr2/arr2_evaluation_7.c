# include <stdio.h> 
int main()
{ 
    int num1[2][3] = {0,};  
    int num2[2][3] = {0,}; 
    int i,j; 
    printf("first array\n"); 
    for(i = 0; i < 2; i++) 
    { 
        for(j = 0; j < 3; j++) 
        { 
            scanf(" %d",&num1[i][j]); 
        } 
    } 
    printf("second array\n"); 
    for(i = 0; i < 2; i++) 
        { 
            for(j = 0; j < 3; j++) 
            { 
            scanf(" %d",&num2[i][j]); 
            } 
        } 
        for(i = 0; i < 2; i++) 
        { 
            for(j = 0; j < 3; j++) 
            { 
                printf("%d ",num1[i][j] * num2[i][j]); 
            } 
            printf("\n"); 
        } 
    return 0; 
}

