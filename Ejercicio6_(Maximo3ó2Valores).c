#include <stdio.h>

int maximo2(int a, int b);
int maximo3(int maximo2(), int c);

int a, b, c;

void main() {
	int maximo = 0;
	while(1) {
		printf("Introduce el valor de a:\n");
		scanf_s("%d", &a);
		printf("Introduce el valor de b:\n");
		scanf_s("%d", &b);
		printf("Introduce el valor de c:\n");
		scanf_s("%d", &c);

		printf("El maximo de a y b es: %d\n", maximo2(a, b));
		maximo = maximo2(a, b);
		printf("El maximo de a, b y c es: %d\n", maximo3(maximo, c));
		system("PAUSE");
		system("cls");
	}
}

int maximo2(int a, int b) {
	if (a < b) {
		return b;
	}
	else if (a > b) {
		return a;
	}
	else {
		//printf("a y b son iguales, por lo tanto el maximo es cualquiera de ellos");
		return a;
	}
}
int maximo3(int maximo, int c) {
	if (maximo < c) {
		return c;
	}
	else if (maximo > c) {
		return maximo;
	}
	else {
		//printf("El maximo de a y b es igual a c, por lo tanto el maximo es cualquiera de ellos");
		return c;
	}
}