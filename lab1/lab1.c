#include<stdio.h>
#define PI 3.14159f
int main(void) {
	float broj;
	printf("Upisi duljinu stranice > ");
	scanf("%f", &broj);
	if(broj <= 0) {
		printf("Duljina stranice mora biti pozitivni broj!\n");
	} else if(broj > 10) {
		printf("Prevelika duljina stranice: %.1f\n", broj);
	} else {
		printf("Povrsina kvadrata: %.1f\nOpseg kruga: %.1f\n", broj*broj, 2*broj*PI);
	}
	return 0;
}
