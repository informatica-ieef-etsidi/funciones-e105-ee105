/*Hacer un programa que determine cu�ntos m�ltiplos de 7 hay entre los n�meros enteros n y
m, ambos inclusive.Los valores n y m ser�n introducidos desde el teclado(se supondr� que
	ambos n�meros son positivos y que m es mayor o igual que n).
	El n�mero de m�ltiplos ser� calculado con una funci�n a la cual se le pasan como argumentos
	los valores de n y m.El valor calculado ser� devuelto a la funci�n main() e impreso en la
	pantalla*/
#include <stdio.h>
#include <stdlib.h>

int multiplo(int n, int m);

void main() {
	int numero1, numero2, numero3, final1, final2;

	printf("Introduzca un numero entero : \n");
	
	scanf_s("%d", &numero1);
	getchar();
	do {
		printf("Introduzca un numero entero : \n");
		scanf_s("%d", &numero2);
		getchar();
		if (numero2 < numero1) {
			printf("El segundo numero debe ser mayor que el primero\n");
			printf("Introduzca un numero entero : \n");
			scanf_s("%d", &numero2);
			getchar();
		}
	} while (numero2 < numero1);
	printf("El numero de multiplos de 7 entre %d y %d es de %d\n", numero1, numero2, multiplo(numero1, numero2));
	system("PAUSE");
}


int multiplo(int n1, int n2) {
	int i, contador = 0;
	for (i = n1+1; i < n2; i++) {
		if (i % 7 == 0) {
			contador = contador++;
		}
	}
	return contador;
}




