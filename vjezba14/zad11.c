#include<stdio.h>
#include<math.h>

unsigned long long factorial(unsigned long long f) {
	unsigned long long res;
	if(f <= 1) {
		res = 1;
	} else {
		res = f * factorial(f - 1);
	}
	return res;
}

double sinus(double x, int n) {
	int i;
	double sum = 0, el;
	for(i = 1; i <= n; ++i) {
		el = pow(x, 2*i - 1) / factorial(2*i - 1);
		if(i % 2 == 0) {
			el = -el;
		}
		sum += el;
	}
	return sum;
}

int main(void) {
	double kut;
   	int n;
	printf("Upisite x i n > ");
	scanf("%lf %d", &kut, &n);
	printf("sinus(%.15f) = %.15f\n", kut, sinus(kut, n));
	printf("  sin(%.15f) = %.15f\n", kut, sin(kut));
	printf("\t\t razlika = %.15f\n", sinus(kut, n) - sin(kut));
	return 0;
}
