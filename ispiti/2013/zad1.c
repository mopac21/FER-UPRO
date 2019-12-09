#include<stdio.h>
int main(void) {
	int d, g, i, j, brojac = 0, jeProst;
	printf("Upisi dva prirodna broja > ");
	scanf("%d %d", &d, &g);
	for(i = d; i <= g; ++i) {
		jeProst = 1;
		if(i % 2 == 0) {
			jeProst = 0;
			continue;
		}
		for(j = 3; j < i - 1; j = j + 2) {
			if(i % j == 0) {
				jeProst = 0;
				break;
			}
		}
		if(jeProst || i == 2) {
			printf("Broj: %d\n", i);
			++brojac;
		}
	}
	if(brojac == 0) {
		printf("U intervalu [%d, %d] nema prostih brojeva.\n", d, g);
	} else {
		printf("Ukupno prostih brojeva: %d\n", brojac);
	}
	return 0;
}
