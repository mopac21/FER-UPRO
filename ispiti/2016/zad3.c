#include<stdio.h>
#define RETCI 5
#define STUPCI 10
int main(void) {
	int polje[RETCI][STUPCI], i, j, sum = 0, max = 0, indeks[STUPCI], brojIndeksa = 0;
	printf("Upisite clanove polja: \n");
	for(i = 0; i < RETCI; ++i) {
		for(j = 0; j < STUPCI; ++j) {
			scanf("%d", &polje[i][j]);
		}
	}
	for(j = 0; j < STUPCI - 1; ++j) {
		sum = 0;
		max = polje[0][j+1];
		for(i = 0; i < RETCI; i++) {
			sum += polje[i][j];
			if(max < polje[i][j+1]) {
				max = polje[i][j+1];
			}
		}
		if(sum == max) {
			indeks[brojIndeksa] = j+1;
			++brojIndeksa;
		}
	}
	printf("Indeksi stupaca: \n");
	for(i = 0; i < brojIndeksa; ++i) {
		printf("%d\n", indeks[i]);
	}
	return 0;
}
