#include<stdio.h>

int main(void) {
	int broj, n1, n2 = 0;

	printf("Upisite broj > ");
	scanf("%d", &broj);

	n1 = broj;

	while(n1 != 0) {
		n2 *= 10;
		n2 += n1 % 10;
		n1 /= 10;
	}

	if(broj == n2) {
		printf("Broj %d je zrcalan.\n", broj);
	} else {
		printf("Broj %d nije zrcalan.\n", broj);
	}

	return 0;
}
