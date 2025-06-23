#include<stdio.h>

int sdx(int n){
	int temp = n;
	int sum = 0;
	while(n> 0){
		sum = sum*10 +n%10;
		n/=10;
	}
	return temp == sum;
}

int main(){
	int n, i;
	printf("Enter n = ");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Output: ");
    for (int i = 0; i < n; i++) {
        if (sdx(arr[i])) {
            printf("%d\t ", arr[i]);
        }
    }return 0;
}	
