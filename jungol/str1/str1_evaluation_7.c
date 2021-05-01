#include <stdio.h>

int main()
{
    char a[100];
    fgets(a, 100, stdin);

    int i,j=1;
    printf("%d. ", j++);
    for(i=0;a[i]!=0;i++){
        if(a[i] != ' ') {
            printf("%c", a[i]);
        }
        else{
            printf("\n%d. ", j++);
        }
    }
}