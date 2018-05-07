#include <stdio.h>
#define MAXLONG 200

int esCapicua(int vector[],int dim);
int pedirN(void);
void pedirVector(int vector[], int dim);

void main() {

	FILE * fichero;
	int i, dim, vector[MAXLONG];
	char opcion;

	fopen_s(&fichero, "fichero_vector.txt", "w");
	do {
		dim = pedirN();

		printf("\nIntroduce a continuacion los elementos del vector:\n ");
		pedirVector(vector, dim);
		if (esCapicua(vector, dim) == 1) {
			printf("\n\nEl vector es capicuo\n\n");

			for (i = 0; i < dim; i++) {
				fprintf(fichero, "%d ", vector[i]);
			}
			fprintf(fichero, "\n");

			system("Pause()");
		}
		else {
			printf("\n\nTu vector no es capicuo\n\n");
			system("Pause");
		}
		getchar();
		printf("\n\n¿Quieres introducir otro vector? S/N  Opcion: ");
		scanf_s("%c", &opcion);
		switch (opcion) {
		case 's':
		case 'S':
			opcion = 'S';
			break;
		case 'n':
		case 'N':
			opcion = 'N';
			break;
		default:
			printf("\n\nOpcion incorrecta. Se cerrara el programa\n\n");
			system("Pause()");
			opcion = 'N';
			break;
		}
	} while (opcion == 'S');
	fclose(fichero);
}


int pedirN(void) {

	int n;
	do {
		printf("\nIntroduce la longitud del vector: ");
		scanf_s("%d", &n);

		if (n <= 0) {
			printf("\n\nTu valor no es aceptable\n\n");
			system("Pause()");
			system("cls");
		}
	} while (n <= 0);

	return n;
}

void pedirVector(int vector[], int dim) {
	int i;
	for (i = 0; i < dim; i++) {
		printf("\nVector[%d];", i + 1);
		scanf_s("%d", &vector[i]);
	}
	system("Cls()");
	printf("Tu vector es: ");
	for (i = 0; i < dim; i++) {
		printf("%d ", vector[i]);
	}
}
int esCapicua(int vector[], int dim) {
	int i;

	//FILE * fichero;

	//fopen_s(&fichero, "fichero_vector.txt", "a"); (Adición de los vectores al final de fichero

	for (i = 0; i < (int)(dim / 2); i++) {
		if ((vector[i]) == (vector[dim - i - 1])) {
			continue;
		}
		else {
			return 0;
		}
	}
	/*
	for (i = 0; i < dim; i++) {
		fprintf(fichero,"%d ", vector[i]);
	}
	fprintf(fichero,"\n");
	fclose(fichero);
	*/
	return 1;
}