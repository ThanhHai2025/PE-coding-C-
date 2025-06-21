#include<stdio.h>
#include<math.h>

int main(){
	double x, y;
	double sum;
	printf("x = ", x); scanf("%lf", &x);
	printf("\ny = ", x); scanf("%lf", &y);
	
	sum = x * x + y * y;
	printf("Tong binh phuong: %.2lf\n", sum);
	return 0;
}
