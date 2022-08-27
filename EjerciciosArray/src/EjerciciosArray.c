/*
 ============================================================================
 Name        : EjerciciosArray.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {

	setbuf(stdout, NULL);

int numeroIngresado [TAM] ;
int suma=0;

for (int i = 0;  i <TAM; i++)
{
	printf("Ingrese un numero :");
	scanf("%d",&numeroIngresado[i]);

	suma= suma + numeroIngresado[i];


}

printf("El resultado de la suma es: %d", suma);


	return EXIT_SUCCESS;
}
