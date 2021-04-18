#include <stdio.h>

int arr[101] = {1, 1, 2};

int func(int N){
    if(arr[N] != 0)return arr[N];
    arr[N] = func(N - 1) * func(N - 2) % 100;
    return arr[N];
}

int main(){
    int N; scanf("%d", &N);
    printf("%d", func(N));
}