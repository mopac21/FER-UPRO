#include<stdio.h>
#include<math.h>
int main(void) {
	int n, i;
	printf("Upisi prirodan broj > ");
	scanf("%d", &n);
	float x[n], y[n], udaljenost, min;
	for(i = 0; i < n; ++i) {
		printf("%3d. tocka >", i+1);
		scanf("%f %f", &x[i], &y[i]);
	}
	min = sqrt(x[0]*x[0]+y[0]*y[0]);
	for(i = 0; i < n; ++i) {
		udaljenost = sqrt(x[i]*x[i]+y[i]*y[i]);
		if(min > udaljenost) {
			min = udaljenost;
		}
	}
	printf("Rezultat:\n");
	for(i = 0; i < n; ++i) {
		udaljenost = sqrt(x[i]*x[i]+y[i]*y[i]);
		if(udaljenost == min) {
			printf("%6.2f %6.2f\n", x[i], y[i]);
		}
	}
	return 0;
}
