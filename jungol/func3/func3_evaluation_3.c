#include <stdio.h>

int arr[11], N, m;

void output() 
{
	for(int i = 1;i <= N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void dice(int idx, int m) 
{
	int sum = 0;
    if(idx > N)
    { 
		for (int i = 1; i <= N; i++)
        {
            sum += arr[i];
        }
        if (sum == m)
        {
            output();
        }
        return;
	}

	for(int i = 1; i <= 6; i++){
		arr[idx] = i;
		dice(idx + 1, m);
	}
}

int main(){
    scanf("%d %d", &N, &m);
	dice(1, m);
}