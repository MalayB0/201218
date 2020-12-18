#include <stdio.h>


int main() {
	int num[][4] = { 1, 2, 3, 4, 5, 6 };

	for (int i = 0; i < sizeof(num[1]) / sizeof(int); i++) {
		for (int j = 0; j < 4; j++) {

			printf("%5d", num[i][j]);
		}
			printf("\n");
	}

	printf("%d", sizeof(num));


}