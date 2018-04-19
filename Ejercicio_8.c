//David Thomas Ruiz
//Este programa los primeros n terminos de una serie, siendo n un numero introducido por el usuario

#include <stdio.h>
#define TAMVECTOR 100

float TerminoN(int n);

void main() {
	int n, i, contador = 0;
	float terminos[100];

	printf("Introduce un valor para n: \n");
	do {
		scanf_s("%d", &n);
		if (n <= 0) printf("Error, n tiene que ser positivo, vuelve a introducirlo: \n");
	} while (n <= 0);

	for (i = 0; contador < n; i++) {
		if (i % 2 == 1) {
			terminos[contador] = TerminoN(i);
			contador++;
		}
	}

	for (i = 0; i < contador; i++) {
		printf("%f,   ", terminos[i]);
	}
	printf("\n\n");
	system("PAUSE");
}

float TerminoN(int n){
	float resultado;

	resultado = (float)(n + 2) / 10;
	return resultado;
}
