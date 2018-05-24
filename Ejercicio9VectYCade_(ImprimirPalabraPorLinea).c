#include <stdio.h>
#define TAM 20

void palabraPorLinea(char frase[TAM]);

void main() {
	char frase[TAM];

	//bucle
	while (1) {
		//Recoger palabra
		printf("Introduce la frase:\n");
		gets(frase, TAM);

		//FUNCION Imprimir palabra por Linea
		palabraPorLinea(frase);


		system("PAUSE");
		system("cls");
	}
}

void palabraPorLinea(char frase[TAM]) {
	int i = 0, longFrase = 0;

	while (frase[i] != '\0') {
		
		i++;
	}
	i = 0;
	while (frase[i] != '\0') {
		printf("%c", frase[i]);
		if (frase[i] == ' ') {
			printf("\n");
		}
		i++;
	}
	

	printf("\n");

}