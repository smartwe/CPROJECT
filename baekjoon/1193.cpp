#include <cstdio>

int i;

int main()
{
	int a;      
	int b;
    b = 1;      
	scanf("%d", &a);

	for(i = 1; a > b;)
		b = b + ++i;

	if(i % 2 == 0)
		printf("%d/%d", i - (b - a), 1 + (b - a));

	else
		printf("%d/%d", 1 + (b - a), i - (b - a));
		
	return 0;
}