#include<stdio.h>

int main(void) {
	float polje[5][7] = {
		{0.f,0.f,0.f,0.f,0.9,0.f},{},{31.1,32.2,33.3,34.2},{1.0,4.0,0.f,0.f,0.f,0.f,7.7},{}
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
