#include<stdio.h>
#include<math.h>
void bubsort(int arr[], int n){
	int i, j;
	int temp;
	for(i=0; i<n-1; i++)
		for(j=0; j<n-i-1; j++)
		if (arr[j]>arr[j+1]){
		temp =arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	}
}
int main(){
	int n,i;
	printf("Enter n: ");	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++){	
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	bubsort(arr,n);
	printf("Output: ");
    for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
	printf("\n");
	
	return 0;
}

