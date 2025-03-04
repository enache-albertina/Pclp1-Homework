#include <stdio.h>
#include <math.h>
#include <limits.h> // Pentru LLONG_MIN

int main(void)
{
	long i, N;
	scanf("%ld", &N);
	long long a, b, a_max = LLONG_MIN, b_max = LLONG_MIN;
	long long a_max2 = LLONG_MIN, b_max2 = LLONG_MIN;
	long long ps = 0;
	double n_a = 0, n_b = 0;
	int sw1 = 0, sw = 0;

	for (i = 0; i < N; ++i) {
		scanf("%llo %llo", &a, &b);

		// Calcul produs scalar
		ps += (unsigned long long)a * (unsigned long long)b;

		// Calcul norma
		n_a += (double)a * (double)a;
		n_b += (double)b * (double)b;

		// Determinare al doilea maxim pentru a
		if (a != a_max) {
			if (a > a_max) {
				sw = 1;
				a_max2 = a_max;
				a_max = a;
			} else if (a > a_max2 && a < a_max) {
				a_max2 = a;
				sw = 1;
			}
		}

		// Determinare al doilea maxim pentru b
		if (b != b_max) {
			if (b > b_max) {
				sw1 = 1;
				b_max2 = b_max;
				b_max = b;
			} else if (b > b_max2 && b < b_max) {
				b_max2 = b;
				sw1 = 1;
			}
		}
	}

	printf("%llu\n", ps);

	// Afișare al doilea maxim pentru a
	if (sw && a_max2 != LLONG_MIN)
		printf("%lld ", a_max2);
	else
		printf("-1 ");

	// Afișare al doilea maxim pentru b
	if (sw1 && b_max2 != LLONG_MIN)
		printf("%lld\n", b_max2);
	else
		printf("-1\n");

	// Afișare norme
	printf("%.7lf %.7lf\n", sqrt(n_a), sqrt(n_b));

	return 0;
}
