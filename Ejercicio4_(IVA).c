#include <stdio.h>

float IVA(float precio, int iva_percent);



void main() {
	int iva_percent = 0;
	float precio = 0, precioConIva = 0;
	while(1){
		printf("Introduce un precio para calcular su IVA\n");
		scanf_s("%f", &precio);


		if (precio < 0) {
			return;
		}
		else {
			printf("Introduce un IVA (sin el porcentaje) para calcular el precio total\n");
			scanf_s("%d", &iva_percent);

			precioConIva = IVA(precio, iva_percent);
			printf("El precio Total de su producto con precio (%.2f) e IVA (%d) es: %.2f ", precio, iva_percent, precioConIva);
		}
		getchar();
		system("PAUSE");
		system("cls");
		
	}
}

float IVA(float precio, int iva_percent) {
	float precioConIva = 0;

	precioConIva = precio - precio * iva_percent / 100;
	return precioConIva;
}
