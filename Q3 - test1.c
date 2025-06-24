#include<stdio.h>
#include<math.h>
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if ( n%i==0) return 0;
	}
	return 1;
}

int sumOfsnt(int n){
	int sum = 0;
	while(n>0){
		sum = sum+ n %10;
		n /=10;
	}
	return sum;
}

int main(){
	int n, i;
	printf("Enter n = ");	scanf("%d", &n);
	printf("\nOutput: ");
	for(i=1; i<=n; i++){
		if(isPrime(sumOfsnt(i))){
			printf("%d\t", i);
		}
	}
	return 0;
}
