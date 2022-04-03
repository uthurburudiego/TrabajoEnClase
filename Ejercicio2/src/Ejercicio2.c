/*
 ============================================================================
 Name        : Ejercicio2.c
 Author      : Diego
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int acumulador=0;
	float promedio;

	for(int i=0; i<5; i++)
	{
		printf("Ingese un numero: ");
		scanf("%d",&numeroIngresado);

		acumulador=acumulador + numeroIngresado;
	}

	promedio= acumulador / 5;

	printf("El promedio es : %f", promedio);




	return EXIT_SUCCESS;
}
