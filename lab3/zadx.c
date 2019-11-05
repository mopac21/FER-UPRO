#include<stdio.h>

int main(void) {
	int n, i, max = 0, min = 0;
	printf("Unesite duljinu niza > ");
	scanf("%d", &n);

	int polje[n];

	printf("Unesite niz duljine %d:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &polje[i]);
		if(i == 0) {
			max = polje[i];
			min = polje[i];
		} else if(polje[i] > max) {
			max = polje[i];
		} else if(polje[i] < min) {
			min = polje[i];
		}
	}

	printf("Razlika najveceg i najmanjeg clana je %d\n", max-min);
	return 0;
}

	
