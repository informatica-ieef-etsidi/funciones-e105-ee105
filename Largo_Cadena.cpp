#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int largo_cadena(char cadena[])
{
	int largo=0;
	while (cadena[largo]!='\0') largo++;
	return largo;
}

main()
{
	char frase[50];
	int contador;
	
	printf("INGRESE FRASE\n");
	gets(frase);
	contador=largo_cadena(frase);
	printf("Largo de la cadena: %d",contador);
	
	return 0;
	
}
