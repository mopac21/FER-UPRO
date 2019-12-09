#include<stdio.h>
int main(void) {
	int n, i, j;
	do {
		printf("Upisi dimenziju > ");
		scanf("%d", &n);
	} while(n < 1 || n > 10);
	float polje[n][n];
	for(i = 0; i < n; i++) {
		scanf("%f", &polje[0][i]);
	}
	for(i = 1; i < n; i++) {
		for(j = 0; j < n - 1; j++) {
			polje[i][j] = polje[i-1][j+1];
		}
		polje[i][j] = polje[i-1][0];
	}
	printf("%12d", 0);
	for(i = 1; i < n; i++) {
		printf("%6d", i);
	}
	for(i = 0; i < n; i++) {
		printf("\n%6d", i);
		for(j = 0; j < n; j++) {
			printf("%6.2f", polje[i][j]);
		}
	}
	return 0;
}
