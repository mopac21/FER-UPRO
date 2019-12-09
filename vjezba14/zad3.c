#include<stdio.h>

long double kvadrat(long double n);

int main(void) {
	long double broj;
	printf("Upisite realni broj > ");
	scanf("%llf", &broj);
	printf("%.2llf na kvadrat je %.2llf\n", broj, kvadrat(broj));
	return 0;
}

long double kvadrat(long double n) {
	return n*n;
}
