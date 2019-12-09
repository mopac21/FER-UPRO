#include<stdio.h>

int getBit(unsigned int x, int n) {
	return (x >> n) % 2;
}

int main(void) {
	int broj, i;
	printf("Upisite nenegativni cijeli broj > ");
	scanf("%d", &broj);
	for(i = 31; i >= 0; --i) {
		printf("%d", getBit(broj, i));
	}
	printf("\n");
	return 0;
}
