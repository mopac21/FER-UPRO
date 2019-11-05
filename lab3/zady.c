#include<stdio.h>

int main(void) {
	int n, i, j, c;
	printf("Unesite broj redaka/stupaca matrice > ");
	scanf("%d", &n);
	int polje[n][n];
	printf("Unesite elemente binarne matrice > \n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", &polje[i][j]);
		}
	}

	for(j = 0; j < n; j++) {
		printf("%d. stupac \n", i+1);
		c = 0;
		for(i = 0; i < n; i++) {
			if(polje[i][j]) c++;
		}
		printf("Broj jedinica: %d, Broj nula: %d\n", c, n-c);
	}

	return 0;
}
