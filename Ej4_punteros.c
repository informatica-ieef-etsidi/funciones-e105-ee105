//Paula Arellano
//Comentario del codigo

#include <stdio.h>
void main()  { 
	int a, b;  //declaracion de las variables sin inicializar
	int *p1, *p2;  //declaracion de los punteros sin inicializar
	
	//inicializacion de las variables
	a = 5;
	b = 5;
	
	//inicializacion de los punteros
	p1 = &a;
	p2 = &b;   
	

	/*La direccion de memoria p1 y la direccion p2 son distintas, ya que a y b no estan almacenadas en la misma direccion
		Por ello, no se mete en el condicional*/

	if ( p1 == p2)
		printf( "Son iguales\n" );  

	system("PAUSE");

} 