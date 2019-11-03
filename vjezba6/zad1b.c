#include<stdio.h>
#define LIMIT 1000

int main(void) {
	int i = 1;
	double suma = 0;
	while(i <= LIMIT) {
		if(i % 2 != 0) {
			suma += 1.f / i;
		} else {
			suma -= 1.f / i;
		}
		i++;
	}
	printf("Suma: %.5f\n", suma);
	return 0;
}
