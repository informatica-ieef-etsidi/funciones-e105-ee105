//Ignacio De Navascues Cuadros

/*
2. Producto Escalar. Realice un programa para calcular el producto escalar de dos vectores
introducidos por el usuario. Para ello programe una función con el siguiente prototipo:
void PEsc(float vector1[], float vector2[], int dimension, int *pe);
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void PEsc(float vector1[], float vector2[], int dimension, int *pe);

int main() {

	int i;
	int dim;
	float vector1[100], vector2[100];
	int resultado = 0;

	printf("\nIntroduzca la dimension de los vectores: ");
	scanf("%d", &dim);

	for (i = 1; i <= dim; i++) {
		printf("\nIntroduzca la coordenada %d del vector 1: ", i, vector1[i]);
		scanf("%f", &vector1[i]);
	}

	for (i = 1; i <= dim; i++) {
		printf("\nIntroduzca la coordenada %d del vector 2: ", i, vector2[i]);
		scanf("%f", &vector2[i]);
	}

	PEsc(vector1, vector2, dim, &resultado);

	printf("\n\nEl resultado del producto escalar entre v1=[");
	for (i = 1; i <= dim; i++) {
		printf(" %.2f", vector1[i]);
	}
	printf("] y v2=[");
	for (i = 1; i <= dim; i++) {
		printf(" %.2f", vector2[i]);
	}
	printf("] es: %d\n\n\n", resultado);


	system("PAUSE");
	return 0;
}


void PEsc(float vector1[], float vector2[], int dimension, int *pe) {

	int i;

	for (i = 1; i <= dimension; i++) {

		*pe += (float)vector1[i] * (float)vector2[i];
	}

}

