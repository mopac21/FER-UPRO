#include<stdio.h>

long long int kvadrat(long long int n);

int main(void) {
	long long int broj;
	printf("Upisite cijeli broj > ");
	scanf("%lld", &broj);
	printf("%lld na kvadrat je %lld\n", broj, kvadrat(broj));
	return 0;
}

long long int kvadrat(long long int n) {
	return n*n;
}
