//Ignacio De Navascu�s Cuadros
/*
8. Cuento A. Realizar un programa que cuente el n�mero de veces que aparece la letras �A�
o �a� en una frase introducida por el usuario, en la funci�n main(). Para contar el
n�mero de apariciones, se utilizar� una funci�n a la cu�l se le pasan como argumentos la
frase.El programa finalizar� imprimiendo en pantalla desde la funci�n main() el n�mero
de veces que aparece el car�cter en la frase.
void cuentoA(char cad[], int *cantA);
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void pedirCadena(char cadena[]);
void cuentoA(char cadena[], int *cantA);
void cambiarAsterisco(char cadena[]);


int main() {

	char frase[100];
	int num_aes = 0;

	pedirCadena(frase);

	cuentoA(frase, &num_aes);

	printf("\n\nLa frase introducida es: ");
	puts(frase);

	printf("\nLa frase tiene %d aes.\n\n\n", num_aes);


	system("PAUSE");
	return 0;
}


void pedirCadena(char cadena[]) {

	printf("\nIntroduce la cadena: ");
	gets(cadena);

}

void cuentoA(char cadena[], int *cantA){

	int i = 0;
	int n = 0;

	while(cadena[i]!='\0'){

		if (cadena[i] == 'a' || cadena[i] == 'A') {

			n++;
		}
		i++;
	}
	*cantA = n;
}

