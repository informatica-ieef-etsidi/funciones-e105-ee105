#include <stdio.h>
#define TAM 20

void imprimirPar(int vector[], int dim);

void main() {
	int dim = 0, i = 0, aux = 0, j = 0, vector[10];

	//Dimension y vector
	printf("Introduce la dimension del vector:\n");
	scanf_s("%d", &dim);
	for (i = 0; i < dim; i++) {
		printf("Introduce el valor %d del vector:\n", i + 1);
		scanf_s("%d", &vector[i]);
	}

	//FUNCION Par o impar
	imprimirPar(vector, dim);


	
	
	
	//imprimir vector
	/*for (i = 0; i < dim; i++)
		printf("%d ", vector[i]);
	printf("\n");
	*/


	system("PAUSE");
	system("cls");
}


void imprimirPar(int vector[], int dim) {
	int i = 0, aux = 0;
	printf("Valores pares del vector:\n");

	for (i = 0; i < dim; i++) {
		aux = vector[i];
		if ((aux % 2) == 0) {
			printf("%d ", vector[i]);
		}
	}
	printf("\n");
	
}