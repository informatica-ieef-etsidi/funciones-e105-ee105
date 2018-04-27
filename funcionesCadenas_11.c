#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*11. Miro Cadena. Realizar una función que cuente la cantidad de caracteres de una cadena
introducida por el usuario y que además sustituya los espacios en blanco por ‘_’ .
void mirocadena (char cad[], int *veces);*/
void mirocadena(char cad[], int *veces);
void main() {
	char cadena[50];
	int ncaracteres;
	printf("Introduzca una frase:\n");
	gets(cadena);
	mirocadena(cadena, &ncaracteres);
	printf("El numero de carcateres de la cadena es:%d.\n", ncaracteres);
	printf("La nueva frase es: %s\n", cadena);
	system("PAUSE");
}
void mirocadena(char cad[], int *veces) {
	int i;
	*veces = 0;
	i = 0;
	while (cad[i] != '\0') {
		i++;
		*veces = *veces + 1;
		if (cad[i] == ' ') {
			cad[i] = '_';
		}
	}
}