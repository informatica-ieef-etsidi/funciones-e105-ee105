
//Paula Arellano
#include<stdio.h>

int sumatorioN(int n);

void main() {
	int numero, suma;

	printf("Introduzca un numero entero: ");
	scanf_s("%d", &numero);

	if (numero<0)
		printf("El numero es negrativo.\n);
	
	else{
		suma = sumatorioN(numero);

		printf("\nEl sumatorio de los %d primeros numeros es %d\n", numero, suma);
	}

	system("PAUSE");
}

int sumatorioN(int n) {
	int i, resultado = 0;

	for (i = 0; i <= n; i++) {
		resultado = resultado + i;
	}

	return resultado;
}
