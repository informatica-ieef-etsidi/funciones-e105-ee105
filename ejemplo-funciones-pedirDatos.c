#include <stdio.h>
#define TAMVECTOR 100

int potencia(int a, int b);
float TerminoN(int n);
int pedirN();
void pedirRango(int *izq, int *der);

void main() {
	int n, i, contador = 0, base, exponente, resultado;
	float terminos[100];
	int izq, der;

	// PEDIR RANGO CON LA FUNCION
	// ToDo: LLAMAR A LA FUNCION
	pedirRango(&izq, &der);
	printf("Rango: [%d-%d]\n", izq, der);



	n = pedirN();

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

	printf("CALCULAR POTENCIA DE DOS NUMEROS\n");
	base = pedirN();
	exponente = pedirN();
	resultado = potencia(base, exponente);
	printf("Potencia = %d\n", resultado);

	system("PAUSE");
}

float TerminoN(int n) {
	float resultado;

	resultado = (float)(n + 2) / 10;
	return resultado;
}

int potencia(int a, int b) {
	int i, resultado = 1;
	for (i = 0; i < b; i++) {
		resultado = resultado * a;
	}
	return resultado;
}

int pedirN() {
	int n;
	printf("Introduce un valor para n: \n");
	do {
		scanf_s("%d", &n);
		if (n <= 0) printf("Error, n tiene que ser positivo, vuelve a introducirlo: \n");
	} while (n <= 0);
	return n;
}

void pedirRango(int *izq, int *der) {
	do {
		*izq = pedirN();
		*der = pedirN();
		if (*izq > *der)
			printf("izq debe ser menor que der\n");
	} while (*izq > *der);

}
