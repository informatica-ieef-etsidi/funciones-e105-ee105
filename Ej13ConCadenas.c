/*A Mayúsculas. Se pide escribir un programa que pida un texto por teclado (una cadena
de caracteres). Es texto debe pasarse a una función cambiar_a_mayus, que cambia
todas las letras minúsculas del texto a mayúsculas. El programa principal mostrará la
cadena ya cambiada. No se deben tener en cuenta las vocales acentuadas ni las eñes, que
tiene otros códigos. Para leer la cadena de texto, puede emplearse scanf o gets. */
//Hecho sin libreria string.h
#include <stdio.h>
void cambiar_a_mayus(char* cadena);
void main(){
	char texto[100];
	printf("Introduzca un texto cualquiera y lo pasaremos a mayusculas\n");
	gets(texto);
	cambiar_a_mayus(texto);
	printf("%s\n", texto);
	system("pause");
	
}
void cambiar_a_mayus(char* cadena) {
	int contador = 0, i;
	for (i = 0; cadena[i] != '\0'; i++) {
		contador = contador++;
	}
	for (i = 0; i <= contador; i++) {
		if (cadena[i] >= 'a' && cadena[i] <= 'z') {
			cadena[i] = cadena[i] - 32;//Pasa a mayusculas
		}
	
	}
	
}
