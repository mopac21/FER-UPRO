#include<stdio.h>

int main(void) {
	int a, b, sel, res;

	printf("Upisite dva cijela broja i operaciju (1-zbrajanje, 2-oduzimanje) > ");
	scanf("%d %d %d", &a, &b, &sel);

	switch(sel) {
		case 1:
			res = a + b;
			printf("%d + %d", a, b);
			break;
		case 2:
			if(a >= b) {
				res = a - b;
			} else if(a < b) {
				res = b - a;
			}
			printf("%d - %d", a, b);
			break;
	}

	printf(" = %d\n", res);
	return 0;
}
