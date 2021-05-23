#include <stdio.h>

int arr[10] = {0,};

void f(int N, int M, int d) {
	for (int i = 1,k; i <= N; i++) 
    {
		if (d == 0)	
        {
            arr[0] = i;
        }
		else 
        {
			for (k = 0; k < d; k++) 
            {
				if (arr[k] >= i) 
                {
                break;
                }
			}
			if (k == d) 
            {
                arr[d] = i;
            }
			else
            {
                continue;
            }
		}

		if (M - 1 == d) 
        {
			for (int n = 0; n < M; n++)
                {
                    printf("%d ", arr[n]);
                }		
			printf("\n");
		}
		else 
        {
        f(N, M, d + 1);
        }
	}
}
int main() 
{
	int N, M;
	scanf("%d %d", &N, &M);

	f(N, M, 0);

	return 0;
}