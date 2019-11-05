#include<stdio.h>

struct pretinac {
	int sifra;
	int visina;
	int sirina;
	int dubina;
	float volumen;
};

int main(void) {
	int n, i, j;
	float t;
	printf("Upisi broj pretinaca > ");
	scanf("%d", &n);
	struct pretinac Pretinac[n];
	printf("Upisite podatke za pretince (%d)\n", n);
	for(i = 0; i < n; i++) {
		printf(" %d. pretinac > ", i+1);
		scanf("%d %d %d %d", &Pretinac[i].sifra, &Pretinac[i].visina, &Pretinac[i].sirina, &Pretinac[i].dubina);
		Pretinac[i].volumen = Pretinac[i].visina * Pretinac[i].sirina * Pretinac[i].dubina / 1000.f;
	}

	for(i = 0; i < n - 1; i++) {
		for(j = i+1; j < n; j++) {
			if(Pretinac[i].volumen < Pretinac[j].volumen ) {
				t = Pretinac[i].volumen ;
				Pretinac[i].volumen  = Pretinac[j].volumen ;
				Pretinac[j].volumen  = t;
			}
		}
	}

	printf("Sortirani pretinci:\n");

	for(i = 0; i < n; i++) {
		printf("%d = %6.2f litara\n", Pretinac[i].sifra, Pretinac[i].volumen);
	}

	return 0;
}
