//Desarrollador: Ana Dueñas
//Programa para aplicar el iva a un producto


#include <stdio.h>
#include <stdlib.h>

float iva(float valor); // Prototipo o definicion de la funcion

void main() {
	float precio, preciofinal;
	printf("Introduzca el precio base de su producto\n");
	scanf_s("%f", &precio);

	while (precio <= 0) {
		printf("El precio debe ser positivo, vuelva a introducir el precio\n");
		scanf_s("%f", &precio);
		getchar();
	}

	preciofinal = iva(precio);
	printf("El precio en  con iva seria de %.2f\n", preciofinal);
	system("PAUSE");
}

	float iva(float valor) {
		float resultado;
	
	resultado = valor * 1.21; //Suponiendo que el iva sea del 21%

	
	return resultado;
}
