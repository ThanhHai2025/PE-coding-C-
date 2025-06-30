#include<stdio.h>
#include<math.h>
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if ( n%i==0) return 0;
	}
	return 1;
}

void veTamGiac(int n){
	int x =2;
	int i, j;
	for (i = 0; i<=n; i++){
		for (j =0; j<=i; j++){
			printf("%d\t", x);
			x++;
			while(!isPrime(x)) x++;
		} printf("\n");
	}
}

int main(){
	int n;
	printf("n = ", n);
	scanf("%d", &n);
	veTamGiac(n);
	return 0;
}