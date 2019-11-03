#include<stdio.h>

int main(void) {
	int polje[11][11], i, j;

	for(i = 0; i < 11; i++) {
		for(j = 0; j < 11; j++) {
			if(i == 0 || i == 10 || i == j || i == 10 - j || j == 0 || j == 10) {
				printf(" 1");
			} else {
				printf(" 8");
			}
		}
		printf("\n");
	}

	return 0;
}
