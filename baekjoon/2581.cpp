#include<stdio.h>

int main()
{
    
    int m,n;
    int sum = 0;
	int min = 10001;
    scanf("%d %d",&m,&n);
    if (m == 1)
		m++;
    for(;m <= n;m++) 
    {
        int check=1;
        for(int j = 2;j <= m / 2;j++) 
        {
            if(m % j == 0)
            {
                check=0;
                break;
            }
        }
        if(check==1) 
        {
            if (min > m)
            {
                min = m;
            }
            sum += m;
        }
    }
    if(sum == 0)
        printf("-1\n");
    else {
        printf("%d\n%d\n",sum,min);
    }
    return 0;
}