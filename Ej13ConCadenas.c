/*A May�sculas. Se pide escribir un programa que pida un texto por teclado (una cadena
de caracteres). Es texto debe pasarse a una funci�n cambiar_a_mayus, que cambia
todas las letras min�sculas del texto a may�sculas. El programa principal mostrar� la
cadena ya cambiada. No se deben tener en cuenta las vocales acentuadas ni las e�es, que
tiene otros c�digos. Para leer la cadena de texto, puede emplearse scanf o gets. */
//Hecho sin libreria string.h
#include <stdio.h>
void cambiar_a_mayus(char* cadena);
void main(){
	char texto[100];
	printf("Introduzca un texto cualquiera y lo pasaremos a mayusculas\n");
	gets(texto);
	cambiar_a_mayus(texto);
	system("pause");
}
void cambiar_a_mayus(char* cadena) {
	int contador = 0, i;
	for (i = 0; cadena[i] != '\0'; i++) {
		contador = contador++;
	}
	for (i = 0; i <= contador; i++) {
		if (cadena[i] >= 97 && cadena[i] <= 122) {
			cadena[i] = cadena[i] - 32;//Pasa a mayusculas
		}
	
	}
	printf("%s\n", cadena);
}