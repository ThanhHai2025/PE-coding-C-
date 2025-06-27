#include<stdio.h>
void output(int arr[], int n){
  int i, j;
    for(i=0;i<n;i++)
	{
	printf("%d\t ", arr[i]);
	}
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
	printf("\t");
	output(arr, n);
	printf("\nOutput: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] %2!=0) {
            printf("%d\t", arr[i]);
        }
    }
	printf("\n");
	return 0;
}	
