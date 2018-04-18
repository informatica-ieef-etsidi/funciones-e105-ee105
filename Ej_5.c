//Programa para pasar de grados centígrados a fahrenheit y viceversa
//Por Ismael Gómez Pacheco

#include <stdio.h>

float cen_fa(float temp);
float fa_cen(float temp);

void main() {
	int opcion;
	float temp;
	printf("Indique que conversor quiere usar:\n");
	printf("Pulse 1 para pasar de Centigrados a Fahrenheit\n");
	printf("Pulse 2 para pasar de Fahrenheit a Centigrados\n");
	printf("Pulse cualquier otra tecla para salir\n");
	scanf_s("%d", &opcion);
	switch (opcion) {
	case 1:
		printf("Introduzca la temperatura en grados centigrados: ");
		scanf_s("%f", &temp);
		printf("La temperatura en grados fahrenheit es de %.2f F\n", cen_fa(temp));
		break;
	case 2:
		printf("Introduzca la temperatura en grados fahrenheit: ");
		scanf_s("%f", &temp);
		printf("La temperatura en grados centigrados es de %.2f C\n", fa_cen(temp));
		break;
	default:
		return;
	}
	system("pause");
}

float cen_fa( float temp) {
	float tempfa;
	tempfa = temp * 9 / 5 + 32;
	return tempfa;
}
float fa_cen(float temp) {
	float tempcen;
	tempcen = (temp - 32) * 5 / 9;
	return tempcen;
}