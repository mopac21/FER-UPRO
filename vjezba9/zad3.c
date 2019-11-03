#include<stdio.h>

int main(void) {
	int i, j, m, n, min, nijeprvi = 0;

	printf("Upisite m, n > ");
	scanf("%d %d", &m, &n);

	int polje[m][n];

	printf("Upisite %d x %d clanova >\n", m, n);
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", &polje[i][j]);
		}
	}

	for(j = 0; j < n; j++) {
		nijeprvi = 0;
		min = polje[i][j];
		printf("%d. stupac: ", j+1);
		for(i = 0; i < m; i++) {
			if(min >= polje[i][j]) {
				min = polje[i][j];
			}
		}
		for(i = 0; i < m; i++) {
			if(polje[i][j] == min) {
				if(nijeprvi) {
					printf(", ");
				}
				printf("(%d, %d)", i, j);
				nijeprvi = 1;
			}
		}
		printf("\n");
	}

	return 0;
}

