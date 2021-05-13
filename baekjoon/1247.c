#include <stdio.h>

int main(){
	int a,num[1000],i,sum=0;
	scanf("%d",&a);
	for(i=0; i<a; i++){
		scanf("%d ",&num[i]);
	}
	for(i=1; i<=a; i++){
		if(num[i-1]>num[i]){
			sum=num[i-1];
			num[i-1]=num[i];
			num[i]=sum;
		}
		else 
			sum=num[i-1];
		}	
	printf("%d",sum);
	
}
