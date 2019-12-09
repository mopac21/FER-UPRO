#include<stdio.h>

void fibonacciN(int n) {
	int f, c = 1, p = 1, i;
	if(n >= 1) {
		printf("1");
	}
	if(n >= 2) {
		printf(", 1");
	}
	for(i = 2; i < n; i++) {
		f = c + p;
		printf(", %d", f);
		p = c;
		c = f;
	}
	return;
}
		
int main(void) {
	int n;
	printf("Upisite broj clanova > ");
	scanf("%d", &n);
	fibonacciN(n);
	printf("\n");
	return 0;
}


