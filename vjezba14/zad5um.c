#include<stdio.h>

void tablica(int m, int n) {
	int i, j;
	for(i = 0; i <= m; ++i) {
		for(j = 0; j <= n; ++j) {
			printf("%5d", ((_Bool)(i)?i:1)*((_Bool)(j)?j:1));
		}
		printf("\n");
	}


	return;
}

int main(void) {
	int m, n;
	printf("Upisite broj redaka i stupaca > ");
	scanf("%d %d", &m, &n);
	tablica(m, n);
	return 0;
}
