#include<stdio.h>
#define BROJ_CLANOVA 500

int main(void) {
	int i, j, brojac = 1, jeprost, prim[BROJ_CLANOVA] = { [0] = 2 };
	for(i = prim[brojac-1] + 1; brojac < BROJ_CLANOVA; i++) {
		jeprost = 1;
		for(j = 0; j < brojac-1; j++) {
			if(i % prim[j] == 0) {
				jeprost = 0;
			}
		}
		if(jeprost) {
			brojac++;
			prim[brojac] = i;
		}
	}

	for(i = 0; i < BROJ_CLANOVA; i++) {
		printf("%d.%8d", i+1, prim[i]);
	}

	return 0;
}
