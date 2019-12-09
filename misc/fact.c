#include<stdio.h>

int fact(int n) {
	return n == 0 ? 1 : n * fact(n - 1);
}

int main(void) {
	int n;
	printf("Upisi broj n > ");
	scanf("%d", &n);
	printf("n! = %d\n", fact(n));
	return 0;
}
