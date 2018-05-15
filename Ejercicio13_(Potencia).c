#include <stdio.h>	

int pedirN(char letra);
int potencia(int a, int b);

void main() {
	int a = 0, b = 0;
	char aLetra = 'a', bLetra = 'b';
	while (1) {
		
		a = pedirN(aLetra);
		b = pedirN(bLetra);

		printf("La potencia de a (%d) elevado a b (%d) es: %d\n", a, b, potencia(a, b));

		system("PAUSE");
		system("cls");
	}
}

int pedirN(char letra) {
	int valor = 0;
	do {
		printf("Introduce un valor de %c\n", letra);
		scanf_s("%d", &valor);
	} while (valor <= 0);
	return valor;
}

int potencia(int a, int b) {
	int potencia = 1, i = 1;
	for (i = 1; i <= b; i++) {
		potencia = potencia * a;
	}
	return potencia;
}