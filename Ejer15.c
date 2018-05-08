//David Thomas

#include <stdio.h>

void permuto(int *, int *);
int pedirN();

void main() {
	int a, b;

	printf("Introduce el valor de a: \n");
	a = pedirN();
	printf("Introduce el de b: \n");
	b = pedirN();

	permuto(&a, &b);

	printf("Ahora a vale %d y b %d \n", a, b);
	system("PAUSE");

}

int pedirN() {
	int n;
	
	scanf_s("%d", &n);

	return n;
}

void permuto(int *a, int *b) {
	int aux;

	aux = *a;
	*a = *b;
	*b = *a;
}