#include<stdio.h>
#define RED 8
int main(void) {
	char polje[RED][RED];
	int i, j;
	for(i = 0; i < RED; ++i)
		for(j = 0; j < RED; ++j)
			((i + j) % 2 == 1) ? (polje[i][j] = 'X') : (polje[i][j] = ' ');
	for(i = 0; i < RED; ++i)
		polje[6][i] = 'P';
	for(i = 0; i < RED; ++i) {
		printf("%d ", RED - i);
		for(j = 0; j < RED; ++j)
			printf("%c ", polje[i][j]);
		printf("\n");
	}
	printf("  ");
	for(i = 0; i < RED; ++i)
		printf("%c ", 'A'+i);
	return 0;
}
