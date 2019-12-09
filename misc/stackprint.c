#include<stdio.h>
#define STACK_SIZE 5000

int main(void) {
	int i;
	void *p = (int *)&i;
	printf("Redni br.\tAdresa\t\tPodatak\n");
	for(i = 0; i < STACK_SIZE; i++) {
		printf("%d. \t%p\t%x\n", i, (void *)(p + i), *(int *)(p + i));
	}
	return 0;
}
