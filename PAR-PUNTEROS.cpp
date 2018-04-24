//PROGRAMA MUESTRA POR PANTALLA LOS NUMEROS PARES DE UN ARREGLO N VALORES CON PUNTEROS


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 4

int main()
{
	int i, numeros[N], *p=numeros;
	
	for(i=0;i<N;i++)
	{
		printf("DIGITE NUMERO %d\n",i);
		scanf("%d",&numeros[i]);
	}
	
	p=numeros;
	
		for(i=0;i<N;i++)
	{
		if(p[i]%2==0)
		{printf("El NUMERO %d ES PAR\n",p[i]);
		printf("POSICION: %d \n",&p[i]);
		}
		
	}
	
	
	
	
	return 0;
}
