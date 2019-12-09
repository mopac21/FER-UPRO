#include<stdio.h>
#define DULJINA 101
int main(void) {
	char ulazni[DULJINA], novi[DULJINA];
	printf("Upisite niz: ");
	fgets(ulazni, DULJINA, stdin);
	int i = 0, j = 0;
	while(ulazni[i] != '\0') {
		if(j % 2 == 0 && ulazni[i] >= 'A' && ulazni[i] <= 'Z') {
			novi[j] = ulazni[i];
			++j;
		} else if(j % 2 == 1 && ulazni[i] >= 'a' && ulazni[i] <= 'z') {
			novi[j] = ulazni[i];
			++j;
		}
		++i;
	}
	novi[j] = '\0';
	printf("Novi niz: %s\n", novi);
	printf("Ulazni niz: %s\n", ulazni);
	return 0;
}
