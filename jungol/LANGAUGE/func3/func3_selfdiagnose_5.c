#include<stdio.h>

int arr[11], N;

void output() {
	for(int i=1;i<=N;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void dice(int idx) {
	if(idx > N){ // idx == N + 1
		output();
		return;
	}

	for(int i=arr[idx - 1]; i<=6;i++){
		arr[idx] = i;
		dice(idx + 1);
	}
}

int main(){
	scanf("%d",&N);
	arr[0] = 1;
	
	dice(1);
}