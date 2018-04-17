#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaTriangulo(float b, float a);
float areaCuadrado(float l);

int main(){
	
	float areaT, areaC;
	float base, altura, lado;
	int opcion;
	
	while(1){
	
	printf("\nElija el area del poligono que desea calcular:\n");
	printf("\n 1 - Triangulo");
	printf("\n 2 - Cuadrado\n");
	scanf("%d", &opcion);
	
	switch(opcion){
		
		case 1:
			
				
            printf("\nIntroduzca la base: ");
     	    scanf("%f", &base);
	        printf("\nIntroduzca la altura: ");
          	scanf("%f", &altura);
	
			areaT = areaTriangulo(base, altura);
			
			printf("\nEl area es de: %.2f", areaT);
				
			return 0;
		
		case 2:
			
				
        	printf("\nIntroduzca el lado: \n");
	        scanf("%f", &lado);
	
			areaC = areaCuadrado(lado);
			
			printf("\nEl area es de: %.2f", areaC);
			
			return 0;;
		
		default:
			
			printf("Opcion incorrecta\n");
			
			break;
	}
}
	
}

float areaTriangulo(float b, float a){
	
	float resultado1;

	resultado1 = b * a / 2;
	
	return resultado1;
}

float areaCuadrado(float l){
	
	float resultado2;

	resultado2 = l * l;
	
	return resultado2;
	
}
