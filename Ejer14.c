//David Thomas

#include <stdio.h>
#define TAMVECTOR 100

int pedirN();
void pedirVector(int vector[], int dim);
void valorAbs(int vector[], int dim);

void main(){
	int vector[TAMVECTOR];
	int dim, i;

	dim = pedirN();
	pedirVector(vector, dim);
	valorAbs(vector, dim);

	printf("El vector en valor absoluto es : \n");
	for (i = 0; i < dim; i++) {
		printf("%d, ", vector[i]);
	}

	system("PAUSE");
}

int pedirN() {
	int n;
	do {
		printf("Introduce el numero de elementos en el vector: \n");
		scanf_s("%d", &n);
		if (n <= 0) printf("Error, n tiene que ser mayor que 0\n");
	} while (n <= 0);

	return n;
}

void pedirVector(int vector[], int dim) {
	int i;

	for (i = 0; i < dim; i++) {
		printf("\n Introduce el elemento %d del vector:  ", i + 1);
		scanf_s("%d", &vector[i]);
	}
}

void valorAbs(int vector[], int dim) {
	int i;

	for (i = 0; i < dim; i++) {
		if (vector[i] < 0) vector[i] *= -1;
	}
}