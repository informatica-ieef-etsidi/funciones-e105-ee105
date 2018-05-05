/*15. Hacer un programa que determine el máximo común divisor de dos números enteros “a” y
“b” que se solicitan al usuario por teclado desde el main().Dichos números serán pasados a
una función, que retorna el MCD de ambos, y el main() se encarga de sacar el resultado por
pantalla.Si uno de los dos números es negativo, se muestra un mensaje de error y no se invoca
la función :
int MCD(int a, int b);*/

#include <stdio.h>
#include <stdlib.h>
int MCM(int a, int b);
int MCD(int a, int b);

void main() {

	int a, b, mcd;

	printf("Introduce a:");
	scanf_s("%d", &a);
	printf("\nIntroduce b:");
	scanf_s("%d", &b);
	printf("\n");

	printf("El MCM de %d y %d es %d.\n", a, b, MCM(a, b));
	printf("El MCD de %d y %d es %d.\n", a, b, MCD(a, b));
	system("pause");
}
int MCM(int a, int b) {
	int mayor;

	if (a < b) {
		mayor = b;
	}
	else {
		mayor = a;
	}
	while ((mayor%a != 0) || (mayor % b != 0)){
		mayor++;
	}
	return mayor;
}
int MCD(int a, int b) {
	int resto, i,MCD;

	if (a < b) {
		do{
			resto = b % a;
			if (resto != 0) {
				b = a;
				a = resto;
			}
			else {
				MCD = a;
			}

		} while (resto != 0);
	}
	else {
		do {
			resto = a % b;
			if (resto != 0) {
				a = b;
				b = resto;
			}
			else {
				MCD = b;
			}

		} while (resto != 0);
	}
	return MCD;
}