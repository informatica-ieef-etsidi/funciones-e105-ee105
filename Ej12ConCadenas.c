/*12. Convierte. Dado un número entero de segundos se desea pasar a horas, minutos y
segundos mediante una función llamada convierte que reciba, como argumento, el
número de segundos y devuelva las horas, minutos y segundos calculados, también como
argumentos.
void convierte (int,int *,int *,int *); 
*/
#include <stdio.h>
void convierte(int, int *, int *, int *);

void main() {
	int segundos, s, h, m;
	printf("Introduzca un numero entero de segundos que desee pasar a horas minutos segundos\n");
	scanf_s("%d", &segundos);
	convierte(segundos, &s, &m,&h);
	printf("%d segundos son:\n->%d horas\n->%d minutos\n->%d segundos\n", segundos, h, m, s);
	system("pause");
}
void convierte(int numero, int *segundos, int *minutos, int *horas){
	int a,b,c,m;
	if (numero < 60) { //Si no llega a un minuto, todo son segundos
		a = numero;
		b = 0;
		c = 0;
	}
	else {
		a = numero % 60;
		m = numero / 60;
		if (m < 60) {//Si no llega a una hora, todo lo restante son minutos
			b = m;
			c = 0;
		}
		else {
			b = m % 60;
			c = m / 60;
		}
	}
	*horas = c;
	*minutos = b;
	*segundos = a;

}