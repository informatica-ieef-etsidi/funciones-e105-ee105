//Paula Arellano

//¿Por que esta mal el codigo?

#include <stdio.h>  

void main() { 

	int *a;   //declaracion de un puntero 
	int c;	 //es necesario inicializar la variable para crear el espacio de memoria

	a = &c; //inicializas el puntero, indicando a que va al contenido de c

	*a = 5; //el contenido de c que es donde apunta a, se iguala a 5

	printf("%d\n", c);
	
	system("pause");
}