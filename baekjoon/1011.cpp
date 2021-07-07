#include <stdio.h>
long long Min(long long a,long long b)
{
    return (a<b)?a:b;
}
int main() {
	int tc;
	scanf("%d",&tc);
	while(tc--){
		long long x,y,k;
		scanf("%lld %lld",&x,&y);
		k=y-x;
		long long mn=1e18;
		for(long long i=1;i*i<=k;i++){
			if(i*i<=k){
				long long num=2*i-1;
				if((k-i*i)%i==0)num+=(k-i*i)/i;
				else num+=(k-i*i)/i+1;
				mn=Min(mn,num);
			}
			else break;
		}
		printf("%lld\n",mn);
	}	
	return 0;
}