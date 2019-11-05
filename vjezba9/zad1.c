#include<stdio.h>

int main(void) {
	float polje[5][7] = {
		{[4] = 0.9f},
		{},
		{31.1,32.2,33.3,34.2},
		{1.0,4.0,[6] = 7.7f},
	};
	int i, j;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 7; j++) {
			printf("%5.1f", polje[i][j]);
		}
		printf("\n");
	}

	return 0;
}
