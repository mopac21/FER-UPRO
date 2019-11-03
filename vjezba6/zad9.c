#include<stdio.h>

int main(void) {
	int i, j, broj, c = 1;

	printf("Upisite broj > ");
	scanf("%d", &broj);
	if(broj < 1 || broj > 10) {
		printf("Broj je neispravan\n");
		return 0;
	}

	for(i = 0; i < broj; i++) {
		for(j = 0; j < broj; j++) {
			if(j < i) {
				printf("    ");
			} else {
				printf("%4d", c);
				c++;
			}
		}
		printf("\n");
	}

	return 0;
}
