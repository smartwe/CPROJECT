#include<stdio.h>
int main(){
    int tc;
    scanf("%d",&tc);
    int a[15][15]={0},s[15][15]={0};
    //s[i][j]= i층의 1호부터 j호까지의 합
    for(int i=1;i<=14;i++){
        a[0][i]=i;
    
        s[0][i]=s[0][i-1]+i;
        
    }
    for(int i=1;i<=14;i++){
        for(int j=1;j<=14;j++){
            a[i][j]=s[i-1][j];
            s[i][j]=s[i][j-1]+a[i][j];
        }
    }
    
    while(tc--){
        int n,k;
        scanf("%d %d",&n,&k);
        printf("%d\n",a[n][k]);
    }
}