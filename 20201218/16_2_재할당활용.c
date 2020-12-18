#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main() {
	char temp[80];
	int size = 3;
	char** str = (char*)calloc(size , sizeof(char*));
	int i = 0;
	printf("'!' 입력시 종료\n");

	while (1) {
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp,"!") == 0) break;
		if (i < size) {
			//strlen은 NULL 미포함이기 때문에 +1
			str[i] = (char*)malloc(strlen(temp) + 1);
			strcpy(str[i], temp);
			i++;
		}
		else {
			size += 3;
			str = (char*)realloc(str, size * sizeof(char*));
			str[i] = (char*)malloc(strlen(temp) + 1);
			strcpy(str[i], temp);
			i++;
		}
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++) {
		free(str[i]);
	}
	return 0;
}

void print_str(char** ps) {
	while (*ps != NULL) {
		printf("%s\n", *ps);
		ps++;
	}
}