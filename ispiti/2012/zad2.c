#include<stdio.h>
int main(void) {
	int n, i, max;
	do {
		printf("Upisi n > ");
		scanf("%d", &n);
	} while(n < 1 || n > 50);
	struct par {
		int prvi, drugi;
	} parovi[n];
	for(i = 0; i < n; ++i) {
		scanf("%d %d", &parovi[i].prvi, &parovi[i].drugi);
	}
	max = parovi[0].prvi + parovi[0].drugi;
	for(i = 1; i < n; ++i) {
		if(max < (parovi[i].prvi + parovi[i].drugi)) {
			max = parovi[i].prvi + parovi[i].drugi;
		}
	}
	for(i = 0; i < n; ++i) {
		if(parovi[i].prvi + parovi[i].drugi == max) {
			printf("(%d, %d)\n", parovi[i].prvi, parovi[i].drugi);
		}
	}
	return 0;
}
