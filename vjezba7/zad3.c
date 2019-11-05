#include<stdio.h>
#include<math.h>

int main(void) {
	int broj, i, j, jeprost;
	printf("Upisi broj > ");
	scanf("%d", &broj);
	if(broj % 2 == 0) {
		jeprost = 0;
	}
	for(i = 3; i < sqrt(broj)+1; i = i + 2) {
		if(broj % i == 0) {
			jeprost = 0;
		}
	}
	if(jeprost) {
		printf("Broj %d je prost.\n", broj);
	} else {
		printf("Broj %d nije prost.\n", broj);
	}

	return 0;
}
