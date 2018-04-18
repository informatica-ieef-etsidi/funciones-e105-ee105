//Programa que calcula el valor absoluto de un número
//Por Ismael Gómez Pacheco
#include <stdio.h>

int valorabs(int n);

void main() {
	int n;
	printf("Introduce n: ");
	scanf_s("%d", &n);
	printf("El valor absoluto de %d es %d\n", n, valorabs(n));
	system("pause");
}

int valorabs(int n) {
	int va = n;
	if (n < 0) {
		va = -n;
	}
	return va;
}