#include <stdio.h>
#define TAM 20

void contarVocales(char palabra[TAM]);

void main() {
	char frase[TAM];

	//bucle
	while (1) {
		//Recoger frase
		printf("Introduce la frase de la que quieres contar las vocales:\n");
		gets(frase, TAM);

		//FUNCION Imprimir al reves
		contarVocales(frase);


		system("PAUSE");
		system("cls");
	}
}

void contarVocales(char frase[TAM]) {
	int i = 0, longFrase = 0, numVocales = 0;
	while (frase[i] != '\0') {
		i++;
		longFrase++;
	}
	i = 0;
	while (frase[i] != '\0') {
		if (frase[i] == 'A' || frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'U') {
			numVocales++;
		}
		i++;
	}
	printf("El numero de vocales en la frase es: %d", numVocales);
	printf("\n");

}