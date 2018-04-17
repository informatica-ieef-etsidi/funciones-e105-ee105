
//Programador: Mariano Jimenez Bohorquez
//Programa para calcular la ley de coulomb con funciones.

#include<stdio.h>
#define k 9000000000

float resultado(float carga1, float carga2, float distancia); //Prototipo

void main() {
	float fuerza, carga1, carga2, distancia, division;

	printf("Introduzca el valor de la primera carga (culombios): \n");
	scanf_s("%f", &carga1);
	printf("Introduzca el valor de la segunda carga (culombios): \n");
	scanf_s("%f", &carga2);
	printf("Introduzca el valor de la distancia que separa las cargas (metros): \n");
	scanf_s("%f", &distancia);
	getchar();

	fuerza = resultado(carga1,carga2,distancia);

	printf("El valor de la fuerza es: %f Newton\n", fuerza);
	system("pause");

}

float resultado(float carga1, float carga2, float distancia) {
	float fuerza;

	fuerza = k * ((carga1 * carga2) / (distancia*distancia));
	return fuerza;
}