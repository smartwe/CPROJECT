#include <stdio.h>
int s[50], k, print[54];
void func(int n,int m)
{
    if(n==6){
        for(int i=0;i<6;i++){
            printf("%d ",print[i]);
        }
        printf("\n");
    }
    for(int i=m;i<k;i++){
        print[n]=s[i];
        func(n+1,i+1);
    }
}
int main()
{
    while(1){
        scanf("%d", &k);
        if(k == 0)break;
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &s[i]);
        }
        func(0,0);
        printf("\n");
    }

    return 0;
}