#include<stdio.h>
#define LIMIT 1000

int main(void) {
	int i = 1;
	double suma = 0;
	do {
		if(i % 2 != 0) {
			suma += 1.f / i;
		} else {
			suma -= 1.f / i;
		}
		i++;
	} while(i <= LIMIT);
	printf("Suma: %.5f\n", suma);
	return 0;
}
