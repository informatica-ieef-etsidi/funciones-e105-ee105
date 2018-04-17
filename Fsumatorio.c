// Marcos Velázquez Ruiz

#include <stdio.h>

int sumatorio(int valor);

void main() {
	int n;
	int resultado;

	do {
		printf("Introduce un n%cmero\n",163);
		scanf_s("%d", &n);
	} while (n <= 0);

	resultado = sumatorio(n);
	printf("El resultado de la suma de los primeros %d n%cmeros es %d\n", n,163, resultado);


	system("pause");
}

int sumatorio(int valor) {
	int resultado = 0, suma = 0, i;
	for (i = 0; i <= valor; i++) {
		suma = suma + i;
		resultado = suma;

	}
	return resultado;
}