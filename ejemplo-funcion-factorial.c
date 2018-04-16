#include <stdio.h>
#include <stdlib.h>

int factorial(int valor); // Prototipo o definicion de la funcion

void main() {
	int factorial1 = 1, factorial2 = 1;
	int i, j, n, m;
	float division;

	printf("Introduzca un numero entero para n: \n");
	scanf_s("%d", &n);
	getchar();
	printf("Introduzca un numero entero para m: \n");
	scanf_s("%d", &m);
	getchar();

	//factorial1 = factorial(n);
	//factorial2 = factorial(m);

	//division = (float)factorial1 / factorial2;
	division = ((float)factorial(n) / factorial(m))*factorial(n - m);

	printf("El resultado de la division de los factoriales de los dos numeros es: %f\n", division);

	system("PAUSE");
}

int factorial(int valor) {
	int resultado = 1, j;

	for (j = valor; j > 0; j--) {
		resultado = resultado * j;
	}
	return resultado;
}