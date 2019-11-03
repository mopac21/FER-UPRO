#include<stdio.h>

int main(void) {
	int broj, zn, dek = 0, i, j;
	
	printf("Upisi broj znamenki > ");
	scanf("%d", &broj);

	if(broj < 1 || broj > 10) {
		printf("Broj znamenki je neispravan\n");
		return 0;
	}

	for(i = 0; i < broj; i++) {
		scanf("%d", &zn);
		for(j = broj - i - 1; j > 0; j--) {
			zn *= 8;
		}
		dek += zn;
	}

	printf(" = %d\n", dek);
	return 0;
}
