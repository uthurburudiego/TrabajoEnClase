/*
 ============================================================================
 Name        : ejercicio3.c
 Author      : Diego
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);


	int numeroIngresado;
	int numeroMax;
	int numeroMin;


	for(int i=0; i<5; i++)
	{
		printf("Ingrese un numero:");

		scanf("%d",&numeroIngresado);

		if(i==0)
		{
			numeroMax=numeroIngresado;
			numeroMin=numeroIngresado;

		}

		if(numeroIngresado> numeroMax)
		{
			numeroMax=numeroIngresado;
		}
		else
		{
			if(numeroIngresado < numeroMin)
			{
				numeroMin=numeroIngresado;
			}
		}
	}

	printf("El numero Maximo: %d \n", numeroMax);
	printf("El numero Minimo: %d", numeroMin);


	return EXIT_SUCCESS;
}
