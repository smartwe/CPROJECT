# include <stdio.h>

int main()
{
	
	char ch[3][5] = {0,};
	int i, j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			scanf(" %c",&ch[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%c ",ch[i][j] + 32);
		}
		printf("\n");
	}
	
	return 0;
}
