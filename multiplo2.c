// Creador: Victor Balbas
// Programa para ver si un numero es multiplo de 2
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int multiplo2(int valor); 

void main() {

	int numero, resultado;
	printf("Introduce un numero para comprobar su divisibilidad entre 2:\n");
	scanf("%d", &numero);

	printf("El numero introducido %d: \n", numero);
	resultado = multiplo2(numero);
	if (resultado == 0) {
		printf("Es divisible entre 2 \n");
	}
	else {
		printf("No es divisible entre 2 \n");
	}
	
	system("PAUSE");
}

int multiplo2(int valor) {

	float resultado;

	resultado = valor % 2;

	return resultado;
}