#include <stdio.h>
#include <stdlib.h>

int maximo2(int n1, int n2); // Prototipo o definicion de la funcion
int maximo3(int n1, int n2, int n3);

void main() {
	int num1 = 5, num2 = -2, num3 = 4, max;

	max = maximo3(num1, num2, num3);
	printf("Maximo: %d\n", max);

	system("pause");
}

int maximo2(int n1, int n2) {
	if (n1 >= n2)
		return n1;
	return n2;
}

int maximo3(int n1, int n2, int n3) {
	return maximo2(maximo2(n1, n2), n3);
}
