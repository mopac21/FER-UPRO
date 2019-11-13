/*
 * Upisi broj redaka m i broj stupaca n matrice. Zatim upisi m x n clanova matrice. Ispisi elementu matrice po nekoj glupoj spirali.
 *
 * Primjer izvrsavanja:
 * Upisite m i n > 3 4\n
 * Upisite 3 x 4 clanova matrice: \n
 * 1 2 3 4\n
 * 5 6 7 8\n
 * 9 10 11 12\n
 * Rezultat:\n
 * 12 11 10 9 5 6 7 8 4 3 2 1 
 *
 */

#include<stdio.h>

int main(void) {
	int m, n, i, j;
	printf("Upisite m i n > ");
	scanf("%d %d", &m, &n);
	int matrica[m][n];
	printf("Upisite %d x %d clanova matrice: \n", m, n);
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", &matrica[i][j]);
		}
	}
	printf("Rezultat:\n");
	for(i = m - 1; i >= 0; i--) {
		if(i % 2 == 0) {
			for(j = n - 1; j >= 0; j--) {
				printf("%d ", matrica[i][j]);
			}
		} else {
			for(j = 0; j < n; j++) {
				printf("%d ", matrica[i][j]);
			}
		}
	}
	return 0;
}
