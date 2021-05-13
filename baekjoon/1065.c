#include<stdio.h>
int f(int n){ //n이 한수이면 1, 한수가 아니면 0 리턴
    if(n<100) return 1;
    int idx=0,arr[10];
    while(n>0){
        arr[idx++]=n%10;
        n/=10;
    }
    int d=arr[1]-arr[0];
    for(int i=2;i<idx;i++){
        if(d!=arr[i]-arr[i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cnt+=f(i);
    }
    printf("%d",cnt);
    return 0;
}