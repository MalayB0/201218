#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pi;
	int size = 10;
	int cnt = 0;
	int num;
	int i;


	pi = (int*)calloc(size,sizeof(int));

	printf("*** 0 ���� �Է½� ���� ***\n");
	while (1) {
		printf("����� �Է��ϼ��� : ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (cnt < size) {
			pi[cnt++] = num;
		}
		else {
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
			pi[cnt++] = num;
		}
	}

	for (i = 0; i < cnt; i++) {
		printf("%-5d", pi[i]);
	}

	free(pi);
	
	return 0;
}