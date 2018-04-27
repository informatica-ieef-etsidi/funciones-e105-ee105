//imprimir los multiplos de un valor cualquiera en el intervalo cualquiera
#include <stdio.h>
#include <string.h>	
#include <stdlib.h>

void pedirRango(int *izq, int *der);
void imprimirMultiplos(int izq, int der, int mult);
int pedirN(char letra);

void main() {
	int izq, der, mult;
	pedirRango(&izq, &der);
	printf("Rango = [%d,%d]\n", izq, der);
	mult = pedirN('M');
	imprimirMultiplos(izq, der, mult);
	printf("\n");



	system("pause");
}

void pedirRango(int *izq, int *der) {
	*izq = pedirN('I');
	while(1) {
		*der = pedirN('D');
		if (*der <= *izq) {
			printf("El segundo valor debe ser mayor que el primero, introduzca otro valor:\n");
		}
		else
			break;
	} 
}
void imprimirMultiplos(int izq, int der, int mult) {
	int i;
	i = izq;
	printf("Los multiplos de %d son: ", mult);
	for (i = izq; i <= der; i++) {
		if (i % mult == 0) {
			if (der - i < mult) {
				printf("%d", i);
			}
			else {
				printf("%d,", i);
			}
		}
	}

}

int pedirN(char letra) {
	int n;
	printf("Introduzca el valor de %c:\n",letra);
	do {
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("El numero no es mayor que 0, introduzca otro valor:\n");
		}
		else
			break;
	} while (n <= 0);
	return n;
}