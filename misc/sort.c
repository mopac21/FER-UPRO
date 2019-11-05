#include<stdio.h>

int selectionSort(int *p, int n) {
	int i, j, t, brojac = 0;
	for(i = 0; i < n; i++) {
		for(j = i; j < n; j++) {
			if(*(p+i) < *(p+j)) {
				t = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = t;
			}
			brojac++;
		}
		brojac++;
	}

	return brojac;
}

int bubbleSort(int *p, int n) {
	int i, j, t, brojac = 0;
	for(i = 0; i < n; i++) {
		for(j = 0; j < n-1; j++) {
			if(*(p+j) < *(p+j+1)) {
				t = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = t;
			}
			brojac++;
		}
		brojac++;
	}

	return brojac;
}

int modifiedBubbleSort(int *p, int n) {
	int i, j, t, fin, brojac = 0;
	for(i = 0; i < n; i++) {
		fin = 0;
		for(j = 0; j < n-1; j++) {
			if(*(p+j) < *(p+j+1)) {
				t = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = t;
			} else {
				fin++;
			}
			brojac++;
		}
		if(fin == n - 1) {
			break;
		}
		brojac++;
	}

	return brojac;
}

int main(void) {
	int sel, n, i, iteracije;
	printf("Odaberi metodu sortiranja (0 - sel, 1 - bub, 2 - modbub) > ");
	scanf("%d", &sel);
	if(sel < 0 || sel > 2) {
		fprintf(stderr, "Pogresan odabir metode sortiranja.\n");
		return 0;
	}
	printf("Upisi broj > ");
	scanf("%d", &n);
	int polje[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &polje[i]);
	}

	switch(sel) {
		case 0:
			iteracije = selectionSort(polje, n);
			break;
		case 1:
			iteracije = bubbleSort(polje, n);
			break;
		case 2:
			iteracije = modifiedBubbleSort(polje, n);
			break;
	}

	for(i = 0; i < n; i++) {
		printf("%d ", polje[i]);
	}
	printf("Broj iteracija: %d\n", iteracije);

	return 0;
}
