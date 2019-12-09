#include<stdio.h>
#define G_GR 11000
#define D_GR 10000
int main(void) {
	int brojUplata[G_GR - D_GR + 1] = {0}, i, j;
	float iznos[G_GR - D_GR + 1] = {0.f}, max;
	printf("Upisujte uplate (br. racuna i iznos): \n");
	do {
		scanf("%d %f", &i, &j);
		++brojUplata[i];
		iznos[i] += j;
	} while(brojUplata < 3);
	max = iznos[0];
	for(i = 0; i <= G_GR - D_GR; ++i) {

