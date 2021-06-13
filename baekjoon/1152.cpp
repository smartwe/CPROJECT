#include<iostream>
using namespace std;
int main()
{
    string s;
    int time = 0;
    getline(cin,s);
    int n=s.length();
    int l=-1,r=0;
    for(int i=0;i<n;i++){
        if(l==-1&&s[i]!=' ')l=i;
        if(s[i]!=' ') r=i;
    } //l= 처음 문자가 등장하는 위치, r은 마지막 문자가 등장하는 위치
    if(l==-1) cout<<"0";
    else{for(int i=l;i<=r;i++){
        if(s[i]==' ') time++;
    }
    cout<<time+1;}
    return 0;
}
