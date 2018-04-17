//Desarrollador: Sandra Ures
//Programa que calcula el producto mas barato entre 3, teniendo en cuenta sus descuentos

#include <stdio.h>

#define NUMPROD 3

float precioMin(float precio, float descuento);

struct producto {
	float precio;
	float descuento;
};

void main() {
	struct producto producto[NUMPROD];
	int i = 0, j;
	float minimo, aux;


	for (i = 0; i < NUMPROD; i++) {
		printf("Dame el precio del producto %d\n", i + 1);
		scanf_s("%f", &producto[i].precio);
		while (producto[i].precio <= 0) {
			printf("Has introducido un precio no valido para el producto %d\n", i + 1);
			printf("Vuelve a introducirlo\n");
			scanf_s("%f", &producto[i].precio);
		}
		printf("Dame el descuento del producto %d en tanto por ciento\n", i + 1);
		scanf_s("%f", &producto[i].descuento);
		while (producto[i].descuento < 0 || producto[i].descuento > 100) {
			printf("El descuento del producto %d no es valido\n", i + 1);
			printf("Vuelve a introducirlo\n");
			scanf_s("%f", &producto[i].descuento);
		}
		if (producto[i].descuento < 1) {
			producto[i].descuento = producto[i].descuento * 100;
		}
	}


	minimo = precioMin(producto[0].precio, producto[0].descuento);
	j = 0;
	for (i = 1; i < NUMPROD; i++) {
		aux = precioMin(producto[i].precio, producto[i].descuento);
		if (aux < minimo) {
			minimo = aux;
			j = i;
		}
	}

	printf("El producto mas barato es el %d con un precio de %.2f\n", j + 1, minimo);

	system("pause");
}

float precioMin(float precio, float descuento) {
	float minimo;

	minimo = precio * (100 - descuento) / 100;

	return minimo;
}