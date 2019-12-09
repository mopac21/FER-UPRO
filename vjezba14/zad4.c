#include<stdio.h>
#include<stdbool.h>

_Bool jestVelikoSlovo(char slovo) {
	return (slovo >= 'A' && slovo <= 'Z') ? true : false;
}

int main(void) {
	char c;
	printf("Upisite znak > ");
	scanf(" %c", &c);
	if(jestVelikoSlovo(c)) {
		printf("Jest veliko slovo\n");
	} else {
		printf("Nije veliko slovo\n");
	}
	return 0;
}
	
