//Programa que hace la operaci�n a*b-a-b con a variando de 0 a 10 y b introducida por el usuario
//Por Ismael G�mez Pacheco
#include <stdio.h>

int operacion(int a, int b);

void main() {
	int a, N;
	printf("Introduce un numero N: ");
	scanf_s("%d", &N);
	for (a = 0;a <= 10;a++) {
		printf("Con a = %d el resultado es %d\n", a, operacion(a, N));
	}
	system("pause");
}

int operacion(int a, int b) {
	int resultado;
	resultado = (a*b) - a - b;
	return resultado;
}