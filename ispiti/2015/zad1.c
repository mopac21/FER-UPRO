#include<stdio.h>
#define ALPHASTART 65
#define DULJINA 101
int main(void) {
	char ulazni[DULJINA], kriptirani[DULJINA];
	int a, b, i = 0;
	printf("Upisite niz: ");
	scanf("%s", ulazni);
	printf("Upisite dva broja: ");
	scanf("%d %d", &a, &b);
	while(ulazni[i] != '\0') {
		kriptirani[i] = ((a * (ulazni[i] - ALPHASTART) + b) % 26) + ALPHASTART;
		++i;
	}
	kriptirani[i] = '\0';
	printf("Kriptirani niz: %s\n", kriptirani);
	printf("Ulazni niz: %s\n", ulazni);
	return 0;
}
