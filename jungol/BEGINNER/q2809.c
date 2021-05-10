# include <stdio.h>
# include <math.h>
int main()
{
	int i,j,n,tmp;
	int sq;
	int arr[10000], count=0;
	
	scanf("%d", &n);
	sq = (int)sqrt(n);
	
	for (i = 1; i <= sq; i++)
	{
		if(n % i == 0)
		{
			arr[count++] = i;
			if(n/i != i)
			{
				arr[count++] = n / i;
			}
		}
	}
	
	for (i = 0; i < count; i++)
	{
		for(j = 0; j < count; j++)
		{
			if(arr[i] < arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	
	for(i = 0; i < count; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
