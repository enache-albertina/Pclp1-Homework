#include <stdio.h>
#include <stdlib.h>

// Determină dacă un pătrat este alb sau negru
int black_or_white(int x, int y)
{
	return (x + y) % 2 == 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int checkboard[n][n];
	long long distance = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			scanf("%d", &checkboard[i][j]);
	}
	int l = 0, c = 0;
	while (checkboard[l][c]) {
		// adaugam la distanta
		int add_distance = checkboard[l][c];
		checkboard[l][c] = 0;
		distance += abs(add_distance);
		// determin daca e linie sau coloana
		if (black_or_white(l, c) == 0) {
			l += add_distance;
		} else {
			// e patrat negru si merg pe coloane
			c += add_distance;
		}
		// daca ma aflu inafara chenarului
		while (l >= n)
			l = l - n;
		while (l < 0)
			l = l + n;
		while (c >= n)
			c = c - n;
		while (c < 0)
			c = c + n;
	}
	printf("%lld\n", distance);
	// afisare pozitie
	l = n - l;
	printf("%d ", l);
	if (c < 26)
		printf("%c\n", 'A' + c % 26);
	else
		printf("%c%c\n", 'A' + c / 26 - 1, 'A' + c % 26);
	return 0;
}
