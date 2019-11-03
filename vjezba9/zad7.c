#include<stdio.h>

int main(void) {
	int i, j, k, m, n, t;

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
		for(k = 0; k < m - 1; k++) {
			for(i = k; i < m; i++) {
				if(polje[k][j] > polje[i][j]) {
					t = polje[k][j];
					polje[k][j] = polje[i][j];
					polje[i][j] = t;
				}
			}
		}
	}

	printf("Nakon sortiranja stupaca:\n");
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%4d", polje[i][j]);
		}
		printf("\n");
	}

	return 0;
}

