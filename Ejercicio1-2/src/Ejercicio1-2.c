/*
 ============================================================================
 Name        : Ejercicio1-2.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description : Mayor de 3 numeros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void)
{
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	int mayor;

	printf("Ingresar un numero:");
	scanf("%d",&numeroUno);

	printf("Ingresar un numero:");
	scanf("%d",&numeroDos);

	printf("Ingresar un numero:");
	scanf("%d",&numeroTres);



	if(numeroUno > numeroDos && numeroUno > numeroTres)
	{
		mayor=numeroUno;
	}
	else
	{
		if(numeroDos > numeroUno && numeroDos > numeroTres)
		{
			mayor = numeroDos;
		}
		else
		{
			mayor= numeroTres;
		}
	}


	printf("El mayor numero es : %d", mayor);

	return EXIT_SUCCESS;
}
