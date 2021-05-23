#include <string.h>
#include <stdio.h>
int main()
{
    char c[104];
    scanf("%s",c);
    int n=strlen(c);
    for(int i=0;i<n/2;i++){
        if(c[i]!=c[n-i-1]){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}