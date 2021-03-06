#include <stdio.h>

int esSimetrica(int matriz[][3], int nfilas, int ncols);

void main() {
	int m[3][3] = { {2,1,1},{1,2,1},{1,3,1} }, i, j;

	if (esSimetrica(m, 3, 3) ) {
		printf("Es simetrica\n");
	}
	else {
		printf("No es simetrica\n");
	}
}

int esSimetrica(int matriz[][3], int nfilas, int ncols) {
	int i, j;

	for (i = 0; i < nfilas; i++) {
		for (j = 0; j < ncols; j++) {
			if (matriz[i][j] != matriz[j][i])
				return 0;
		}
	}

	return 1;
}