#include<stdio.h>

int main(void) {
	int i = 1, n, np;

	printf("Upisite prirodni broj n > ");
	scanf("%d", &n);

	np = n;

	while(n != 1) {
		printf(" %d,", n);
		if(n % 2 == 0) {
			n = n / 2;
		} else if(n % 2 == 1) {
			n = 3 * n + 1;
		}
		if(i % 10 == 0) {
			printf("\n");
		}
		i++;
	}
	printf(" ...");
	printf("\nza n = %d, total stopping time = %d\n", np, i);
}
