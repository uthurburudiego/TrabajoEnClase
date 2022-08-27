/*
 ============================================================================
 Name        : Ejercicio2-1.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description : Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la
aplicación con distintos valores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TAM  3

int main(void) {

	setbuf(stdout, NULL);

	int numeroIngresado;
	int promedioTotal;
	int acumulador=0;


	for (int i = 0; i < TAM; i++)
	{
		printf("Por favor, ingrese un numero:");
		pedirUnEntero(&numeroIngresado);

		acumulador=numeroIngresado+acumulador;


	}

  promedio(acumulador,TAM,&promedioTotal);

   printf("El promedio es :%d",promedioTotal);


	return EXIT_SUCCESS;
}
