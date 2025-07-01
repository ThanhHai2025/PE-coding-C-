#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100];
	gets(str);
	int count[10]= {0};
	int i;
	int isdigit();
//	printf("Enter string: ");
//	scanf("%s", str);
	for( i=0; i<= strlen(str); i++)
//	{if(str[i]>= '0' && str[i]<= '9'){
//		count[str[i]-'0']++;
//		}
//	}
	if(isdigit(str[i])){	
	count[str[i]-'0']= count[str[i]-'0']+1;
	printf("Output: \n");
	}

	for( i=0; i< 10; i++){
		if(count[i]>0){
			printf("%d: %d\n", i, count[i]);
		}
	}
	return 0;
}