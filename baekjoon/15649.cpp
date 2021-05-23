#include <bits/stdc++.h>
using namespace std;

int a, b;
int ch[10],print[10];
void f(int n,int k) //현재까지 N개의 수를 뽑았고, K까지 뽑은 상태
{
    if(n==b){
        for(int i=0;i<n;i++){
            printf("%d ",print[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=a;i++){
        if(ch[i]==0){
            ch[i]=1;
            print[n]=i;
            f(n+1,i);
            ch[i]=0;
        }
    }
}

int main()
{
    scanf("%d %d", &a, &b);
    f(0,0);
    return 0;
}