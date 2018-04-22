//Paula Arellano

/*Introduzca dos números enteros por teclado. Realice las operaciones
de suma, multiplicación, división y diferencia utilizando punteros.*/

#include<stdio.h>

void main() {
	int *p1, *p2, *pr;
	float *pc; 
	int n1, n2;
	int resultado = 0;
	float cociente = 1;

	printf("Introduzca dos numeros enteros: \n");
	printf("N1: ");
	scanf_s("%d", &n1);
	printf("N2: ");
	scanf_s("%d", &n2);

	 p1 = &n1;
	 p2 = &n2;
	 pr = &resultado;
	 pc = &cociente;

	*pr = *p1 + *p2;

	printf("La suma de %d y %d es %d\n", *p1, *p2, *pr);

	*pr = *p1 - *p2;

	printf("La diferencia de %d y %d es %d\n", *p1, *p2, *pr);

	*pr = *p1 * *p2;

	printf("El producto de %d y %d es %d\n", *p1, *p2, *pr);

	*pc= (float) *p1 / *p2; 
	
	printf("El cociente de %d y %d es %.2f\n", *p1, *p2, *pc);

	system("PAUSE");
}