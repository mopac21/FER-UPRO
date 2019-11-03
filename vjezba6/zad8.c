#include<stdio.h>

int main(void) {
	int i, j, red;

	printf("Upisite red matrice > ");
	scanf("%d", &red);

	if(red < 1 || red > 10) {
		printf("Red matrice je neispravan\n");
		return 0;
	}

	for(i = 0; i < red; i++) {
		for(j = 0; j < red; j++) {
			if(i == j) {
				printf(" 1");
			} else {
				printf(" 0");
			}
		}
		printf("\n");
	}

	return 0;
}
