#include<bits/stdc++.h>
using namespace std;
int f(int n){ //n이 한수이면 1, 한수가 아니면 0 리턴
    if(n<100) return 1;
    vector<int> v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    int d=v[1]-v[0];
    for(int i=2;i<v.size();i++){
        if(d!=v[i]-v[i-1]){
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
    exit(0);
}