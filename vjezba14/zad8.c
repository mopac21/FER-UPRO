#include<stdio.h>

int kolikiJeInt() {
	return sizeof(int);
}

int main(void) {
	printf("int je velicine: %d\n", kolikiJeInt());
	return 0;
}
