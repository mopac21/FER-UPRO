#include<stdio.h>

int main(void) {
	int polje[3][6][4];
	int i, j, k;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 6; j++) {
			for(k = 0; k < 4; k++) {
				polje[i][j][k] = 10 * (i + 1) + (j + 1)  + 100 * (k + 1);
			}

		}
	}

	for(k = 0; k < 4; k++) {
		printf("%d. sloj", k+1);
		for(i = 0; i < 3; i++) {
			printf("\n");
			for(j = 0; j < 6; j++) {
				printf("%5d", polje[i][j][k]);
			}
		}
		printf("\n");
	}

	return 0;
}
