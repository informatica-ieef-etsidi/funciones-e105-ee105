#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pedirN(char letra);
void imprimirmultiplos( int izq, int der,int multiplo);
void pedirrango(int *izq, int *der);


main()
{
	
	int izq,der,multiplo;

	pedirrango(&izq,&der);
	printf("MULTIPLO\n");
	multiplo=pedirN('N');
	printf("LOS MULTIPLOS DEL RANGO\n");
	imprimirmultiplos(izq,der,multiplo);
	
	return 0;
}

int pedirN(char letra)
{
	int n;

	printf("INGRESE %c\n",letra);
	scanf("%d",&n);
	
	return n;	
}
void pedirrango(int *izq, int *der)
{
	do
	{*izq=pedirN('I');
	*der=pedirN('D');
	}while(*der<=*izq);
	printf("El rango es: %d,%d\n",*izq,*der);
	system("pause");
	return ;
}
void imprimirmultiplos( int izq, int der,int multiplo)
{
	int i;
	for(i=izq;i<der;i++)
	{
		if(i%multiplo==0)
		printf("%d\n",i);
	}
	return ;	
}
