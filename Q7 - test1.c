#include<stdio.h>
void binary(int n){
	int binary[32], i=0;
	while(n>0){
		binary[i] = n%2;
		n /=2;
		i++;
	}
	for(int j =i-1;j >=0; j--){
		printf("%d", binary[j]);
	}
}

void octal(int n){
	int octal[32], i = 0;
	while(n>0){
		octal[i]=n%8;
		n /=8;
		i++;
	}
	for(int j = i-1; j>= 0; j--){
		printf("%d", octal[j]);
	}
}
int main(){
	int n,i;
	printf("Enter n: ");	scanf("%d", &n);
	if(n<=0){
		printf("nhap lai gia tri n!\n"); 
		return 1;
	}
	printf("%d in binary number format 10 to 2 is: ", n);
	binary(n);
	printf("\n");
	printf("%d in 8 number format 10 to 2 is: ", n);
	octal(n);
	printf("\n");
	return 0;
}
