//Paula Arellano
#include<stdio.h>
void pedir_cita();

struct cita {
	char usuario[15];
	char fecha[10];
};

void main() {
	pedir_cita();
}

void pedir_cita() {
	struct cita cita;
	int i = 0, j;

	printf(" Nombre del paciente: ");
	gets(cita.usuario);

	printf(" \nFecha de la cita (formato Mes-Dia-Hora): ");
	gets(cita.fecha);

	FILE * citas;

	errno_t error;
	
	//Fichero

	error = fopen_s(&citas, "citas.txt", "w");

	if (error == 0) {

		printf("Cita concertada correctamente\n");

	}

	else {

		printf("Ha habido un error %d al abrir el fichero\n", error);

		system("pause");

		return; //sale del programa

	}

	fprintf(citas, "%c\n", cita.usuario);
	fprintf(citas, "%c\n\n", cita.fecha);

	fclose(citas);

}
