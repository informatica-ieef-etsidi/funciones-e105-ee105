#include <stdio.h>

int sumoN(int n);
int factN(int n);

void main() {
	int n = 0;
	float total = 0;

	printf("Introduce un valor de n:\n");
	scanf_s("%d", &n);
	printf("El valor de suma %d\n",  sumoN(n));
	printf("El valor de factorial %d\n",  factN(n));
	total = (float)((float)sumoN(n) / (float)factN(n));
	printf("El valor de la division para n = %d es : %f\n", n, total);

	system("PAUSE");
}

int sumoN(int n) {
	int i = 1, suma = 0;

	for (i = 1; i <= n; i++) {
		suma = suma +i;
	}
	return suma;
}

int factN(int n) {
	int i = 1, fact = 1;

	for (i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}