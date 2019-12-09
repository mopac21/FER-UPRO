#include<stdio.h>

void fibonacci15() {
	int a = 1, b = 1, c, i;
	printf("1, 1");
	for(i = 2; i < 15; ++i) {
		printf(", %d", a + b);
		c = a;
		a = b;
		b = a + c;
	}
	return;
}

int main(void) {
	fibonacci15();
	printf("\n");
	return 0;
}
