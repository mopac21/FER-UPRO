#include<stdio.h>

int kvadrat(int n);

int main(void) {
	int broj;
	printf("Upisite cijeli broj > ");
	scanf("%d", &broj);
	printf("%d na kvadrat je %d\n", broj, kvadrat(broj));
	return 0;
}

int kvadrat(int n) {
	return n*n;
}
