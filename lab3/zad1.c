/*
 * Upisuj broj clanova niza dok taj broj nije u intervalu [5, 20]. Kada je upisani broj n
 * unutar tog intervala, upisi n cijelih brojeva niza u polje ulaz[]. Odredi najveci i
 * najmanji clan tog niza. Ispisi razlike najveceg clana i svakog pojedinog elementa upi-
 * sanog niza.
 *
 * Primjer izvodenja programa:
 * Upisite broj clanova niza [5, 20] > 4\n
 * Upisite broj clanova niza [5, 20] > 6\n
 * Upisite clanove niza (6) > 5 10 -3 15 11 2\n
 * 5 0 13 -5 -1 8\n
 *
 */

#include<stdio.h>

int main(void) {
	int n, i, max, min;
	do {
		printf("Upisite broj clanova niza [5, 20] > ");
		scanf("%d", &n);
	} while(n < 5 || n > 20);
	int ulaz[n];
	printf("Upisite clanove niza (%d) > ", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &ulaz[i]);
	}
	for(i = 0; i < n; i++) {
		if(i == 0) {
			max = ulaz[i];
			min = ulaz[i];
		} else {
			if(ulaz[i] > max) max = ulaz[i];
			if(ulaz[i] < min) min = ulaz[i];
		}
	}
	for(i = 0; i < n; i++) {
		printf("%d ", max-ulaz[i]);
	}
	return 0;
}
