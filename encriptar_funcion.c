#include <stdio.h>
#include <stdlib.h>
#define TAM 50

void encriptar(char *p, int numero);

void main(void)
{
	char cadena[TAM] = "Mensaje a ocultar";
	int numero = 1;

		encriptar(cadena, numero);

	system("PAUSE");
}

void encriptar(char *p, int numero) {
	int i = 0;
	int longitud = 0;
	while (*p != '\0') {
		(*p)=(*p)+numero;
		if (*p == 'E') {
			*p = 'O';
		}
		else if (*p == 'e') {
			*p = 'o';
		}
		else if (*p == 'O') {
			*p = 'E';
		}
		else if (*p == 'o') {
			*p = 'e';
		}
		p++;
	}
	
}
