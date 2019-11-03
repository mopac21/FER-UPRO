#include<stdio.h>

int main(void) {
	int broj, suma = 0;

	do {
		printf("Upisi broj > ");
		scanf("%d", &broj);
		if(broj % 3 == 0 || broj % 7 == 0) suma += broj;
		else break;
	} while(1);

	printf("suma = %d\n", suma);
	return 0;
}
