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
	printf("\n tienes %d anios, %s",edad,nombre);
	
	
	
	return 0;
}
