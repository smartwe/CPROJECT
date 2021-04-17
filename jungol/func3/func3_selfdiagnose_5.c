#include <stdio.h>
int N, arr[101];

void output()
{
	int i;
	for (i = 1; i <= N; i++) 
    {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void dice(int level)
{
	int i;

	if (level > N) {
		output();
		return 0;
	}

	for (i = arr[level - 1]; i <= 6; i++)  
    {
		arr[level] = i;
 		dice(level + 1);
    }
}

int main()
{
	scanf("%d", &N);
	arr[0] = 1;

	dice(1);
	return 0;
}