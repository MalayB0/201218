#include <stdio.h>

int main(int argc, char **argv) {
	int i;

	for (i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	printf("argc : %d\n", argc);
	return 0;
}