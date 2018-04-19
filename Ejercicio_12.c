//David Thomas
//Este programa calcula la suma de los n terminos de una serie

#include <stdio.h>
#include <math.h>

float sumaSerie(int n);

void main() {
	int n;
	float suma;

	printf("Introduce un numero para n: \n");
	do {
		scanf_s("%d", &n);
		if (n <= 0) printf("n tiene que ser mayor que 0, vuelve a introducirlo: \n");
	} while (n <= 0);

	suma = sumaSerie(n);

	printf("%f \n\n", suma);
	system("PAUSE");
}

float sumaSerie(int n) {
	int i;
	float suma = 0;

	for (i = 1; i <= n; i++) {
		suma += 1 / pow(i, 2);
	}
	return suma;
}
