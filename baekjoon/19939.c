#include <stdio.h>
int N, K;
int S;

int main()
{
    scanf("%d %d", &N, &K);
    S = N - ((K * (K - 1)) / 2);
    if(S < K)
    {
        printf("-1");
    }
    else if(S % K == 0)
    {
        printf("%d", K-1);
    }
    else if(S % K != 0)
    {
        printf("%d", K);
    }
    
    return 0;
}
