/*
 * Upisite niz koji sigurno nije dulji od 200 znakova. Ispisite broj razlicitih malih slova u nizu.
 *
 * Primjer izvrsavanja:
 * Upisite niz znakova > 123abc45678aaad\n
 * Broj razlicitih malih slova je 4.
 *
 */

#include<stdio.h>
#define AFS 97

int main(void) {
	int i = 0, brojac = 0;
	char str[200];
	int slova[26] = {0};

	printf("Upisite niz znakova > ");
	fgets(str, 201, stdin);

	while(str[i] != '\0') {
		if(str[i] >= 'a' && str[i] <= 'z') {
			slova[str[i] - AFS]++;
		}
		i++;
	}
	for(i = 0; i < 26; i++) {
		if(slova[i] != 0) {
			brojac++;
		}
	}

	printf("Broj razlicitih malih slova je %d.\n", brojac);
	return 0;
}
