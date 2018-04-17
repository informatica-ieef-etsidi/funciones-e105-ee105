//Programa que calcula la longitud de una circunferencia con una función
//Por Ismael Gómez Pacheco
#include <stdio.h>
#define PI 3.141592

float resultado(float r);

void main() {
	float r;
	float longitud;
	printf("Introduce r: ");
	scanf_s("%f", &r);
	longitud = resultado(r);
	printf("La longitud de la circunferencia de radio %.1f es %.2f\n", r, longitud);
	system("pause");
}

float resultado(float r) {
	float longitud;
	longitud = 2 * PI * r;
	return longitud;
}