//Desarrollador: Daniel Iglesias Cuesta
//Calculo de la hipotenusa mediante Pitágoras

#include<stdio.h>
#include<math.h>

float Hipo(int cat1, int cat2);


void main() {
	float cat1, cat2;
	float hipotenusa;


	printf("Introduce el primer cateto:\n");
	scanf_s("%f", &cat1);
	printf("Introduce el segundo cateto:\n");
	scanf_s("%f", &cat2);

	hipotenusa = Hipo(cat1, cat2);

	printf("El valor de la hipotenusa es: %.2f\n", hipotenusa);

	system("PAUSE");
}

float Hipo(int cat1, int cat2) {
	float hipotenusa;
	hipotenusa = sqrt(cat1*cat1 + cat2 * cat2);
	return hipotenusa;
}