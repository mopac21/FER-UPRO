#include<stdio.h>

int zbroj(int polje[5]);

int main(void) {
	int polje[5] = {1, 2, 3, 4, 5};
	printf("Zbroj: %d\n", zbroj(polje));
	return 0;
}

int zbroj(int polje[5]) {
	int i = 0, rez = 0;
	for(i = 0; i < 5; i++) {
		rez += polje[i];
	}
	return rez;
}
