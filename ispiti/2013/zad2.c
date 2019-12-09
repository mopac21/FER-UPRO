#include<stdio.h>
#define LIMIT 11
int main(void) {
	char niz1[LIMIT], niz2[LIMIT], zn;
	int indeks, i, len = 0;
	printf("Upisi niz znakova > ");
	fgets(niz1, LIMIT, stdin);
	printf("Upisi znak > ");
	scanf(" %c", &zn);
	printf("Upisi indeks > ");
	scanf("%d", &indeks);
	while(niz1[len] != '\n') {
		++len;
	}
	niz1[len] = '\0';
	niz2[len] = '\0';
	for(i = 0; i < len; ++i) {
		niz2[i] = niz1[i];
	}
	if(indeks < len) {
		if((niz2[indeks] >= 'A' && niz2[indeks] <= 'Z')
		|| (niz2[indeks] >= 'a' && niz2[indeks] <= 'z')) {
			niz2[indeks] = zn;
		} else if(niz2[indeks] < '0' || niz2[indeks] > '9') {
			niz2[indeks] = '?';
		}
	}
	printf("Originalni niz: %s, novi niz: %s\n", niz1, niz2);
	return 0;
}
