#include<stdio.h>

int main(void) {
	int i, j, m, n, broj;

	printf("Upisite m, n > ");
	scanf("%d %d", &m, &n);

	for(i = 0; i < m; i++) {
		for(j = n + i; j > i; j--) {
			printf("%4d", j);
		}
		printf("\n");
	}

	return 0;
}
