#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
	char str[100];
	printf("Enter string: ");
	scanf("%s", str);
	printf("The old string: \"%s\"\n", str);
	for (int i = 0; i < strlen(str); i++){
		str[i]=str[i]+1;
	}
	printf("The new string: \"%s\"\n", str);
	return 0;
}

