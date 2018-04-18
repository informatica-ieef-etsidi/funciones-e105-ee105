/*10. Realizar un programa para calcular la distancia entre dos puntos introducidos por el usuario
a través de una función con el siguiente prototipo:
float dist (float x1, float y1, float x2, float y2);*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float dist(float x1, float y1, float x2, float y2);
void main() {
	float x1, y1, x2, y2;
	printf("Introduzca un punto\n");
	printf("La x\n"); 
	scanf_s("%f", &x1);
	printf("La y\n");
	scanf_s("%f", &y1);
	printf("Introduzca el segundo punto\n");
	printf("La x\n");
	scanf_s("%f", &x2);
	printf("La y\n");
	scanf_s("%f", &y2);
	printf("La distancia entre puntos es de:%.5f\n", dist(x1, y1, x2, y2));
	system("pause");
}
float dist(float x1, float y1, float x2, float y2) {
	float restax, restay,resultado;
	restax = x2 - x1;
	restay = y2 - y1;
	resultado = pow(restax, 2) + pow(restay, 2);
	resultado = pow(resultado, 0.5);
	return resultado;
}
