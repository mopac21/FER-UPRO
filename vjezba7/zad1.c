#include<stdio.h>
#define LIMIT 25

int main(void) {
	int i, j, brojac = 1, jeprost;
	printf("2\n");
	for(i = 3; brojac < LIMIT; i++) {
		jeprost = 1;
		for(j = 2; j < i-1; j++) {
			if(i % j == 0) {
				jeprost = 0;
			}
		}
		if(jeprost) {
			printf("%d\n", i);
			brojac++;
		}
	}

	return 0;
}

