#include <cstdio>
int main()
{
    int a;
    int cnt = 0,i=1,x=1;
    scanf("%d", &a);
   while(1){
       //printf("%d\n",x);
        if(a-x<=0){
            break;
        }
        x+=i*6;
        i++;
    }
    printf("%d",i);
    return 0;
}