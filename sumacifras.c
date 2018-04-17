//Gonzalo Sánchez Delgado
//Programa que suma las cifras de un numero introducido por el usuario
#include <stdio.h>
#include <stdlib.h>

void main() {
	int num;

	printf("Escriba un numero entero positivo: \n");
	scanf_s("%d", &num);
	printf("La suma de las cifras del numero %d es: %d\n", num, sumaDeSusCifras(num));

	system("PAUSE");
}

int sumaDeSusCifras(int numero) {
	int suma = 0;

	if (numero < 10)
		return numero;
	else
	{
		while (numero >= 10){ //Para dividir el numero en todas las cifras que lo forman
			suma += numero % 10;
			numero /= 10;
		}
		suma += numero; //Suma el ultimo numero de la ultima division con los restos de los cocientes anteriores
		return suma;
	}
}