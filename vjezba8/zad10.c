#include<stdio.h>

int main(void) {
	int n, i, j;
	printf("Upisite cijeli broj [5, 20] > ");
	scanf("%d", &n);
	int polje[n];
	printf("Upisite cijele brojeve (%d): ", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &polje[i]);
	}
	j = 0;
	for(i = 2; i < n; i = i + 2) {
		polje[j] = polje[i-1];
		printf("%d ", polje[j]);
		j++;
	}

	printf("\n");

	return 0;
}
