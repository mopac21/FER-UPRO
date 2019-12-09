#include<stdio.h>
#define LIMIT 1001
int main(void) {
	char niz[LIMIT], ch, t1, t2;
	int i, index, len = 0;
	fgets(niz, LIMIT, stdin);
	printf("%s", niz);
	while(niz[len] != '\0') {
		++len;
	}
	niz[len-1] = '\0';
	do {
		scanf("%d %c", &index, &ch);
		if(index > 0 && index < LIMIT && len < LIMIT) {
			for(i = len; i > index; --i) {
				niz[i+1] = niz[i];
			}
			niz[i] = ch;
			printf("%s\n", niz);
		} else {
			break;
		}
	} while(1);
	return 0;
}
