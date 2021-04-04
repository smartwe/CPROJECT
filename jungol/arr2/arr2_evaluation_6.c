# include <stdio.h>

int main(){
	int arr[6][6] = {0,};
	int i, j;
	arr[1][1] = 1;
	arr[1][3] = 1;
	arr[1][5] = 1;
	for (i = 2; i < 6; i++)
	{
		for (j = 1; j < 6; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
		}
	}
	for(i = 1; i < 6; i++) 
	{ 
		for(j = 1; j < 6; j++) 
		{ 	
		printf("%d ",arr[i][j]); 
		} 
		printf("\n"); 
	}
	return 0;
}