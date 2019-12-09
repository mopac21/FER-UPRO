#include<stdio.h>
#include<math.h>
#define LIMIT 10
int main(void) {
	char niz[LIMIT];
	int i = 0, len, broj = 0;
	printf("Upisi niz > ");
	fgets(niz, LIMIT, stdin);
	while(niz[i] != '\n' && niz[i] != '\0') {
		if(niz[i] < '0' || niz[i] > '9') {
			printf("Dopustene su samo dekadske znamenke.\n");
			return 0;
		}
		++i;
	}
	len = i;
	for(i = 0; i < len; ++i) {
		broj *= 10;
		broj += niz[i]-48;
	}
	printf("%d, %.2f\n", broj, sqrt(broj));
	return 0;
}
