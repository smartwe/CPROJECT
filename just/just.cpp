#include<stdio.h>
#include<algorithm>
struct p{
    int x,y;
}a[104];
//1. cmp 함수를 만든다.( 비교 함수)
int cmp(p a,p b){
    if(a.y==b.y)return (a.x>a.y);
    return a.y>b.y;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i].x,&a[i].y);
    }
    std::sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        printf("%d %d\n",a[i].x,a[i].y);
    }
    return 0;
}