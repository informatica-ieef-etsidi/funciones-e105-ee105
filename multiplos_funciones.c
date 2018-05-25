#include<stdio.h>

void pedir_numero(int *a, int *b);
void calculus(int *s, int *t, int a, int b);

void main() {
	int a;
	int b;
	int n3=0, n7=0;
	pedir_numero(&a, &b);
	calculus(&n7, &n3, a, b);

	printf("Hay %d multiplos de 3 y %d de 7\n", n3, n7);

	system("PAUSE");
}

void pedir_numero(int *a, int *b) {
	do {
		printf("Introduzca un numero A mayor que cero: ");
		scanf_s("%d", a);
		printf("Introduzca un numero B mayor que cero: ");
		scanf_s("%d", b);
	} while ((a < 0) && (b < 0));
}

void calculus(int* s, int *t, int a, int b) {
	int i;
	
	if (a < b) {
		for (i = a; i <= b; i++) {
			if (i % 3 == 0) {
				(*t)++;
			}
			if (i % 7 == 0) {
				(*s) ++;
			}
		}
	}

	if (a > b) {
		for (i = b; i <= a; i++) {
			if (i % 3 == 0) {
				*t++;
			}
			if (i % 7 == 0) {
				*s++;
			}
		}
	}

}

