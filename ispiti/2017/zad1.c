#include<stdio.h>
int main(void) {
	char ulazniNiz[101], izlazniNiz[101];
	printf("Upisati niz: ");
	fgets(ulazniNiz, 101, stdin);

	int i = 0, j = 0, duljina;
	while(ulazniNiz[i] != '\0') {
		++i;
	}
	duljina = ++i;

	if(duljina != 0 && duljina % 2 == 0) {
		for(i = 0; i < duljina; i += 2) {
			if(ulazniNiz[i] >= 'a' && ulazniNiz[i] <= 'z' || ulazniNiz[i+1] >= 'a' && ulazniNiz[i+1] <= 'z') {
				izlazniNiz[j++] = 'X';
			} else {
				izlazniNiz[j++] = ulazniNiz[i];
				izlazniNiz[j++] = ulazniNiz[i+1];
			}
		}
		izlazniNiz[j] = '\0';
		printf("Novi niz: %s\n", izlazniNiz);
	}
	return 0;
}
