#include <stdio.h>

int main()
{
	int n, i, j;
    int num, f, cnt=0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n ; i++ ){
    	scanf("%d", &num);
        f = 0;
        
        if(num == 1)
        	continue;
            
        for(j = 2; j < num ; j++ )
        	if(num % j==0)
            	f = 1;
                
		if(f == 0)
        	cnt++;
    }
    printf("%d\n", cnt);
    
	return 0;
}