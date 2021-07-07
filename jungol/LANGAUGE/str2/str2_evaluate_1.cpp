#include <cstdio>
#include <cstring>

int main()
{
	char arr[101] = {0,};
	char ch[20][20] = {0,};
	
	int i,j = 0 ,k = 0;
	
	fgets(arr ,101 ,stdin);
	
	for(i = 0; arr[i] != 0; i++)
	{
		if(arr[i] == ' ')
		{
			ch[j][k] = 0;
			j++;
			k = 0;
		}
		else
		{
			ch[j][k] = arr[i];
			k++; 
		}
	}
	ch[j][k-1] = 0;
	for(; j >= 0; j--)
	{
		printf("%s\n",ch[j]);
	}
	
	return 0;
}
