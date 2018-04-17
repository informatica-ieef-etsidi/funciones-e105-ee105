#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*15. Hacer un programa que determine el m�ximo com�n divisor de dos n�meros enteros �a� y �b�  que  se  solicitan  al  usuario  por  teclado
desde  el main().Dichos  n�meros  ser�n  pasados  a una  funci�n,  que  retorna  el  MCD  de  ambos,  y  el main() se  encarga  de  sacar  el  resultado  por pantalla. Si uno de los dos n�meros es negativo, se muestra un mensaje de error y no se invoca la funci�n:
int MCD( int a, int b);*/
int MCD(int a, int b);
void main() {
	int numero1, numero2;
	printf("Introduce a:\n");
	scanf("%d", &numero1);
	printf("Introduce b:\n");
	scanf("%d", &numero2);
	if (numero1 < 0 || numero2 < 0) {
		printf("ERROR.\n");
	}
	else {
		printf("El MAXIMO COMUN DIVISOR entre a %d y b %d es:%d\n", numero1, numero2, MCD(numero1, numero2));
	}
	system("PAUSE");

}
int MCD(int a, int b) {
	int mayor, i, mcd;
	if (a < b) {
		mayor = a;
	}
	else {
		mayor = b;
	}
	for (i = 1; i <= mayor;i++) {
		if (a%i == 0 && b%i == 0) {
			mcd = i;//guarda el ultimo com�n, es decir, el m�s mayor, y por tanto el resultado.
		}
	}
	return mcd;
}