#include<stdio.h>

int main(void) {
	int i, j, k, c = 1;

	for(i = 1; i <= 100; i++) {
		for(j = 1; j <= 100; j++) {
			for(k = 0; k <= 100; k++) {
				if(i*i + j*j == k*k) {
					printf("%d.trojka: %d^2 + %d^2 = %d^2\n", c, i, j, k);
					c++;
				}
			}
		}
	}

	return 0;
}
