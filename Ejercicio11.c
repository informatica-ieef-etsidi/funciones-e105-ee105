// Marcos Velázquez Ruiz

#include <stdio.h>

int Sumatorio(int n, int a, int b);
void main() {

	int n, a, b, resultado;
	printf("Introduce un n%cmero\n", 163);
	scanf_s("%d", &n);
	do {
		printf("Introduce los extremos inferior y superior del sumatorio \n");
		scanf_s("%d %d", &a, &b);
	} while (a > b);
	resultado = Sumatorio(n, a, b);
	printf("Resultado = %d\n", resultado);

	system("pause");
}
int Sumatorio(int n, int a, int b) {		int resultado = 0, suma = 0, i;
	for (i = a; i<= b; i++) {
		suma = suma + n*i;
		resultado = suma;

	}	return resultado;}