/*
 * Upisi red kvadratne matrice. Nije potrebno provjeravati je li upisani broj ispravan.
 * Zatim upisi elemente matrice, s tim da su svi elementi prirodni brojevi. Nula se ne
 * smatra prirodnim brojem. Izracunaj aritmeticku sredinu brojeva na glavnoj dijagonali
 * i kao rezultat ispisi pocetnu matricu u kojoj su svi elementi podijeljeni sa tom ar-
 * itmetickom sredinom.
 *
 * Primjer izvodenja programa:
 * Upisite n > 2\n
 * Upisite 2 x 2 elemenata > \n
 * 1 2
 * 3 3
 * Rezultat:\n
 * 0.50 1.00 \n
 * 1.50 1.50 \n
 *
 */

#include<stdio.h>

int main(void) {
	int n, i, j, sum = 0;
	float arsr;
	printf("Upisite n > ");
	scanf("%d", &n);
	int ulaz[n][n];
	printf("Upisite %d x %d elemenata > \n", n, n);
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			do {
				scanf("%d", &ulaz[i][j]);
			} while(ulaz[i][j] < 1);
		}
	}
	for(i = 0; i < n; i++) {
		sum += ulaz[i][i];
	}
	arsr = (float)sum/n;
	printf("Rezultat:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%.2f ", (float)ulaz[i][j]/arsr);
		}
		printf("\n");
	}

	return 0;
}
