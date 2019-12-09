#include<stdio.h>
int main(void) {
	int n, i;
	printf("Upisi n > ");
	scanf("%d", &n);
	struct vrijednosti {
		float x, m;
	} tijela[n];
	for(i = 0; i < n; ++i) {
		do {
			scanf("%d %d", tijela[i].x, tijela[i].m);
		} while(tijela[i].m <= 0);
	}
	float xrezi = 0.f, ukupnaMasa = 0.f;
	for(i = 0; i < n; ++i) {
		xrez += tijela[i].x * tijela[i].m;
		ukupnaMasa += tijela[i].m;
	}
	xrez /= ukupnaMasa;
	printf("X-koordinata tezista: %.2f\n", xrez);
	return 0;
}
