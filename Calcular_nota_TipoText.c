//Desarrollador: Daniel Iglesias Cuesta
//Calculo de la nota de un ejercicio tipo text que resta 1/3 por pregunta mal

#include<stdio.h>

float Text(int preguntas, int nRespuestas, int preguntasmal);


void main() {
	int preguntas, nRespuestas, preguntasmal;
	float nota;

	printf("Introduce el numero de preguntas:\n");
	scanf_s("%d", &preguntas);
	printf("Introduce el numero de preguntas respondidas:\n");
	scanf_s("%d", &nRespuestas);
	printf("Introduce el numero de preguntas respondidas mal:\n");
	scanf_s("%d", &preguntasmal);
	

	nota = (float)Text(preguntas, nRespuestas, preguntasmal);

	printf("La nota que tiene en el examen es: %f\n", nota);

	system("PAUSE");
}

float Text(int preguntas, int nRespuestas, int preguntasmal) {
	float nota;
	nota = ((((float)nRespuestas - ((float)preguntasmal + ((float)preguntasmal / 3))) / preguntas) * 10);
	return nota;
}