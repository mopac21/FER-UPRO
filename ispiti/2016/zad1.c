#include<stdio.h>
#define LIMIT 10000
int main(void) {
	unsigned int i;
	int brojac, posmak;
	for(i = 1; i < LIMIT; i++) {
		brojac = 0;
		for(posmak = 0; posmak < 32; ++posmak) {
			brojac += (i >> posmak) & 1;
		}
		if(brojac == 4) {
			printf("%d\n", i);
		}
	}
	return 0;
}
