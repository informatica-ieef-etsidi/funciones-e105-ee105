//Ignacio De Navascues Cuadros

/*
3. Puntos del plano. Dados dos puntos en el espacio cuyas coordenadas son introducidas por
el usuario en un vector como el siguiente float coord[4], se pide :
a) Realizar una función para calcular la distancia entre los puntos.
b) Realizar una función que verifique que los puntos están en primer y tercer
cuadrante.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia(float coordenadas[4]);
int Cuadrante(float coordenadas[4]);


int main() {

	int i, j;
	float coord[4];
	float dist;

	printf("\nIntroduzca las coordenadas del punto 1: \n");
	for (i = 1; i <= 2; i++) {
		
		scanf("%f", &coord[i]);
	}
	printf("\nIntroduzca las coordenadas del punto 2: \n");
	for (i = 3; i <= 4; i++) {
		
		scanf("%f", &coord[i]);
	}

	printf("\n\nVector 1: [%.2f, %.2f]", coord[1], coord[2]);
	printf("\n\nVector 2: [%.2f, %.2f]\n\n", coord[3], coord[4]);

	dist = distancia(coord);
	printf("\nLa distancia entre los dos puntos es de:  %.2f", dist);

	if (Cuadrante(coord)) {
		printf("\n\nLos puntos estan entre el primer y tercer cuandrante\n\n");
	}
	else {
		printf("\n\nLos puntos no estan entre el primer y tercer cuandrante\n\n");
	}
	

	system("PAUSE");
	return 0;
}


float distancia(float coordenadas[4]) {

	float resultado;
	float valorx, valory, valor;

	valorx = pow(coordenadas[3] - coordenadas[1], 2);
	valory = pow(coordenadas[4] - coordenadas[2], 2);
	valor = valorx + valory;
	resultado = sqrt(valor);

	return resultado;
}

int Cuadrante(float coordenadas[4]) {

	if (coordenadas[1] > 0 && coordenadas[2] > 0 && coordenadas[3] < 0 && coordenadas[4] < 0) {
		return 1;
	}
	else if (coordenadas[1] < 0 && coordenadas[2] < 0 && coordenadas[3] > 0 && coordenadas[4] > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

