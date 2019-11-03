#include<stdio.h>
#define LIMIT 1000

int main(void) {
	int i;
	double suma = 0;
	for(i = 1; i <= LIMIT; i++) {
		if(i % 2 != 0) {
			suma += 1.f / i;
		} else {
			suma -= 1.f / i;
		}
	}
	printf("Suma: %.5f\n", suma);
	return 0;
}
