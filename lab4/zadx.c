#include<stdio.h>

int main(void) {
	char str[200];
	int n, i;
	printf("Upisite niz > ");
	scanf("%s", str);

	printf("Upisite broj pozicija > ");
	scanf("%d", &n);
	int poz[n];
	for(i = 0; i < n; i++) {
		printf("Upisite %d. poziciju > ", i+1);
		scanf("%d", &poz[i]);
	}

	for(i = 0; i < n; i++) {
		if(poz[i] > 0 && poz[i] <= 200) {
			if(str[poz[i]] > '5' && str[poz[i]] <= '9') {
				str[poz[i]] = '#';
			}
		}
	}

	printf("%s\n", str);
	return 0;
}
