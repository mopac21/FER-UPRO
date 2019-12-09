#include<stdio.h>

int getBit(unsigned int x, int n) {
	return (x >> n) % 2;
}

int main(void) {
	int broj, rb;
	printf("Upisite nenegativni cijeli broj > ");
	scanf("%d", &broj);
	printf("Upisite redni broj bita > ");
	scanf("%d", &rb);
	printf("Vrijednost bita je %d\n", getBit(broj, rb));
	return 0;
}
