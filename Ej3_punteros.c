//Paula Arellano
//Comentario del codigo

#include <stdio.h> 

void main() {

	int a, b; //declaracion de las variables sin inicializar
	int *p1, *p2; //declaracion de los punteros sin inicializar

	//inicializacion de las variables
	a = 5; 
	b = 5;

	//inicializacion de los punteros
	p1 = &a;
	p2 = &b;


	/*La variable a la que apunta p1 es a (que es igual a 5) y la variable a la que apunta p2 es b (que tambien es igual a 5)*/
	if (*p1 == *p2) 
		printf("Son iguales\n");


	system("PAUSE");
}