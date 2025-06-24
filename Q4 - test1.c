#include<stdio.h>

int main(){
 	int i, j, n, m;
 	printf("Enter n: "); 	scanf("%d", &n);
 	printf("Enter m: "); 	scanf("%d", &m);
 	if (n<=m){
 		printf("n phai lon hon m!\n");
		return 1;
	 }

 	for (i=0; i<m; i++) {
		for(j =0; j < n; j++) {
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
		}
		printf("\n");
	}
	
	return 0;
}
