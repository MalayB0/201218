#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char temp[80];
	char* str[3];
	int i;	

	for (i = 0; i < 3; i++) {
		printf("문자열을 입력하세요 : ");
		gets(temp);
		//strlen은 NULL 미포함이기 때문에 +1
		str[i] = (char*)malloc(strlen(temp)+1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3 ; i++) {
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3 ; i++) {
		free(str[i]);
	}

	return 0;
}