#include <stdio.h>
#include <stdlib.h>

#define MAX_M_N 100

// Functie ce umple o matrice cu elemente de 0
void matrix_with_zeros(int rows, int cols, int matrix[rows][cols])
{
	for (int i = 0; i < rows; i++)	{
		for (int j = 0; j < cols; j++)
			matrix[i][j] = 0;
	}
}

// Functie ce determina numarul de restrictii
int number_of_restrictions(int N, int M, int i, int matrix[N][M])
{
	int k;
	for (k = 0; k < M; k++) {
		if (matrix[i][k] == 0)
			break;
	}
	return k;
}

int restriction(int r[MAX_M_N], int k, int line[], int n)
{
	int i = 0, j, count;
	for (j = 0; j < k; j++) {
		count = 0;
		for (; i < n && line[i] == 0; ++i)
			;
		while (i < n && line[i] == 1) {
			count++;
			i++;
		}
		if (count != r[j])
			return 0;
	}
	while (i < n) {
		if (line[i] == 1)
			return 0;
		i++;
	}
	return 1;
}

int main(void)
{
	int N, M, T, k;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &N, &M);
		int nanogram[N][M];
		int restrictions_line[N][MAX_M_N];
		int restrictions_cols[M][MAX_M_N];
		matrix_with_zeros(N, MAX_M_N, restrictions_line);
		matrix_with_zeros(M, MAX_M_N, restrictions_cols);

		for (int i = 0; i < N; ++i) {
			scanf("%d", &k);
			for (int j = 0; j < k; ++j)
				scanf("%d", &restrictions_line[i][j]);
		}

		for (int i = 0; i < M; ++i) {
			scanf("%d", &k);
			for (int j = 0; j < k; ++j)
				scanf("%d", &restrictions_cols[i][j]);
		}

		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j)
				scanf("%d", &nanogram[i][j]);
		}

		int correct = 1;
		for (int i = 0; i < N; ++i) {
			k = number_of_restrictions(N, MAX_M_N, i, restrictions_line);
			if (!restriction(restrictions_line[i], k, nanogram[i], M)) {
				correct = 0;
				break;
			}
		}

		for (int j = 0; j < M; ++j) {
			int cols[N];
			for (int i = 0; i < N; i++)
				cols[i] = nanogram[i][j];
			k = number_of_restrictions(M, MAX_M_N, j, restrictions_cols);
			if (!restriction(restrictions_cols[j], k, cols, N)) {
				correct = 0;
				break;
			}
		}

		if (correct)
			printf("Corect\n");
		else
			printf("Eroare\n");
	}
	return 0;
}
