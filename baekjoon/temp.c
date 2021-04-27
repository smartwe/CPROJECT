#include <stdio.h>
int main() {
    int i, count, num;
    int inArr[10000];
    scanf("%d %d", &count, &num);
    
    for (i = 0; i < count; i++){
        scanf("%d", &inArr[i]);
        if(inArr[i] < num)
            printf("%d ", inArr[i]);
    }
}