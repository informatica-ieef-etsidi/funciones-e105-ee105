#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*9. Formato. Realizar una funci�n que imprima en una nueva l�nea cada palabra de una frase
introducida por el usuario. El prototipo de la funci�n ser�:
void formato (char cad[]);
La frase ser� introducida por el usuario en el main().
NOTA: No se pueden utilizar funciones de string.h*/
void formato(char cad[]);
void main() {
	char frase[50];
	printf("Introduzca una frase:\n");
	gets(frase);
	printf("\n");
	formato(frase);
	system("PAUSE");
}
void formato(char cad[]) {
	int i;
	i = 0;
	while (cad[i] != '\0') {
		if (cad[i] != ' ') {
			printf("%c", cad[i]);
		}
		else {
			printf("\n");
		}
		i++;
	}
	printf("\n");
}