#include <stdio.h>
#include <stdlib.h>

// Functie de comparatie pentru qsort (ordine descrescatoare)
int compare_desc(const void *a, const void *b)
{
	int int_a = *((int *)a);
	int int_b = *((int *)b);

	if (int_a == int_b)
		return 0;
	else if (int_a < int_b)
		return 1;
	else
		return -1;
}

int main(void)
{
	int N;
	scanf("%d", &N);
	int grades[N], credits[N], sorted[N];
	int min_p;

	for (int i = 0; i < N; ++i)
		scanf("%d", &grades[i]);

	for (int i = 0; i < N; ++i)
		scanf("%d", &credits[i]);
	scanf("%d", &min_p);

	int p = 0;
	for (int i = 0; i < N; ++i) {
		p += credits[i] * grades[i];
		sorted[i] = credits[i] * (10 - grades[i]);
	}

	int size = (sizeof(sorted) / sizeof((sorted)[0]));
	qsort(sorted, size, sizeof(int), compare_desc);

	int i = 0;
	while (i < N && p < min_p) {
		p += sorted[i];
		i++;
	}

	if (p >= min_p)
		printf("%d\n", i);
	else
		printf("-1");

	return 0;
}
