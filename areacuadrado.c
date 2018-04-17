#include <stdio.h>
#include <stdlib.h>

 // calcula el area de un cuadrado preguntando el lado
float area(float valor);

void main() {

	float l, areA;
	printf("Introduzca el lado:");
	scanf_s("%f", &l);
	areA = area(l);
	printf("\nEl area es %.2f\n", areA);
	system("Pause");

}
float area(float valor) {
	float area;
	area = valor * valor;
	return area;
}