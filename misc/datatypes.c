#include<stdio.h>

int main(void) {
	short int a;
	int b;
	long int c;
	long long int d;

	printf("A: %d\tB: %d\tC: %d\tD: %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
	return 0;
}
