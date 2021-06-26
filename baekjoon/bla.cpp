#include <stdio.h>
#include <string.h>
struct awesome
{
    char clothes[31];
    int t;
};

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d", &n);
        awesome arr[34];
        int cnt=0;
        for(int i=0;i<30;i++) arr[i].t=0;
        for(int i=0;i<n;i++){
            char a[34],b[34];
            scanf("%s %s",a,b);
            int flag=1;
            for(int j=0;j<cnt;j++){
                if(strcmp(arr[j].clothes,b)==0){
                    arr[j].t++;
                    flag=0;
                    break;
                }
            }
            if(flag){
                strcpy(arr[cnt++].clothes,b);
                arr[cnt-1].t=1;
            }
        }
        int ans=1;
        for(int i=0;i<cnt;i++){
            ans*=(arr[i].t+1);
        }
        printf("%d\n",ans-1);
    }
}