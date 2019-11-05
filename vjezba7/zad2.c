#include<stdio.h>
#define DONJA_GRANICA 1000
#define GORNJA_GRANICA 10000

int main(void) {
	int i, j, jeprost;
	for(i = DONJA_GRANICA; i < GORNJA_GRANICA; i++) {
		jeprost = 1;
		for(j = 2; j < i-1; j++) {
			if(i % j == 0) {
				jeprost = 0;
			}
		}
		if(jeprost) printf("%d\n", i);
	}

	return 0;
}

