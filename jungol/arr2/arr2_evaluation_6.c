# include <stdio.h>

int main(){
	
	int num[6][6]={0,};
	int i,j;
	
	for(i = 1; i<6; i+=2)
		num[1][i] = 1;
	
	for(i = 2; i<6; i++)
	{
		for(j = 1; j<6; j++)
		{
			num[i][j] = num[i-1][j-1]+num[i-1][j+1];
		}
	}
	
	for(i = 1; i<6; i++)
	{
		for(j = 1; j<6; j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}