#include<stdio.h>
#include<stdlib.h>

int main(){
	char nombre[20];
	int edad;
	
	printf("Hola, cual es tu nombre?: \n");
	scanf("%s",&nombre);
	printf("\nHola %s",nombre);
	printf("\n\nCuantos anios tienes %s?:",nombre);
	scanf("%d",&edad);
	printf("\nTienes %d anios",edad,nombre);
	
	if(edad>=18){
		printf("\n\nEres mayor de edad %s, puedes tomar",nombre);
	}else{
		printf("\n\nEres menor de edad %s, no puedes tomar",nombre);
	}
	
	
	return 0;
}
