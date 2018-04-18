//Paula Arellano

#include<stdio.h>

int valor_positivo();
void asteriscos(int n);


void main() {
	int n, i;

	n = valor_positivo();
	
	for (i = 1; i <= n; i++) {
		asteriscos(i);
	}


	system("PAUSE");
}

int valor_positivo() {
	int n;

	do {
		printf("Introduzca un valor entero: \n");
		scanf_s("%d", &n);
	} while (n <= 0);

	return n;
}

void asteriscos(int n) {
	int i;

	for (i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}
