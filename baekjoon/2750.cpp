#include <bits/stdc++.h>
using namespace std;

int f(int p,int q){
    return p<q;
}

int main()
{
    int arr[10000000000001];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr,arr+n,f);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}