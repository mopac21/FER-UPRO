#include<stdio.h>
#define BROJ_CLANOVA 40

int main(void) {
	int i, fib[BROJ_CLANOVA] = { 1, 1 };

	for(i = 2; i < BROJ_CLANOVA; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}

