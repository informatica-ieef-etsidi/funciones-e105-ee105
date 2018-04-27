#include <stdio.h>
#include <string.h>

struct Persona {
	char nombre[50], apellidos[100];
};

int contarVocales(char cadena[]);
void cambiarFrase(char cadena[]);
int esVocal(char letra);

void main() {

	char frase[50];
	struct Persona alumno;

	printf("Introduce la frase: ");
	gets(frase);

	printf("La frase es %s\n", frase);

	printf("El numero de vocales es %d\n", contarVocales(frase));

	cambiarFrase(frase);

	printf("La nueva frase es %s\n", frase);

	printf("Introduce el nombre del alumno: ");
	gets(alumno.nombre);
	printf("Introduce los apellidos del alumno:");
	gets(alumno.apellidos);

	printf("El numero de vocales del nombre es %d\n", contarVocales(alumno.nombre));

	cambiarFrase(alumno.apellidos);

	printf("Los apellidos sin vocales son %s\n", alumno.apellidos);

	system("pause");
}

int contarVocales(char cadena[]) {

	int i, contador = 0;

	for (i = 0; cadena[i] != '\0'; i++) {
		if (esVocal(cadena[i])) {
			contador++;
		}
	}

	return contador;
}

void cambiarFrase(char cadena[]) {

	int i;

	for (i = 0; cadena[i] != '\0'; i++) {
		if (esVocal(cadena[i])) {
			cadena[i] = '*';
		}
	}
}

int esVocal(char letra) {

	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
		return 1;
	}
	
	return 0;
	
}