#include <stdio.h>
#define TAM 20

void imprimirAlReves(char palabra[TAM]);

void main() {
	char palabra[TAM];

	//bucle
	while (1) {
		//Recoger palabra
		printf("Introduce la palabra que quieras poner al reves:\n");
		gets(palabra, TAM);

		//FUNCION Imprimir al reves
		imprimirAlReves(palabra);


		system("PAUSE");
		system("cls");
	}
}

void imprimirAlReves(char palabra[TAM]) {
	int i = 0, longPalabra = 0;

	while (palabra[i] != '\0') {
		longPalabra++;
		i++;
	}
	i = longPalabra - 1;
	while (i != 0) {
		printf("%c", palabra[i]);
		i--;
	}
	printf("%c", palabra[0]);
	printf("\n");

}