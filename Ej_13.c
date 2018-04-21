//Programa que calcula la potencia de un número introducido por el usuario
//Por Ismael Gómez Pacheco
#include <stdio.h>

int potencia(int a, int b);

void main() {
	int i, a, b;
	printf("Introduce un valor a positivo: ");
	scanf_s("%d", &a);
	for (i = 1;i > 0;i++) {
		if (a > 0) {
			break;
		}
		printf("El valor de a tiene que ser positivo, vuelve a introducirlo: ");
		scanf_s("%d", &a);
	}
	printf("Introduce un valor b positivo: ");
	scanf_s("%d", &b);
	for (i = 1;i > 0;i++) {
		if (b >= 0) {
			break;
		}
		printf("El valor de b tiene que ser positivo, vuelve a introducirlo: ");
		scanf_s("%d", &b);
	}
	printf("El valor de %d elevado a %d es %d\n", a, b, potencia(a, b));
	system("pause");
}

int potencia(int a, int b) {
	int i, resultado = 1;
	for (i = 0;i < b;i++) {
		resultado = resultado * a;
	}
	return resultado;
}