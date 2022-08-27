/*
 * utn.c
 *
 *  Created on: 24 abr. 2022
 *      Author: diego
 */
#include <stdio.h>
#include <stdlib.h>

// ESTA FUNCION SE ENCARGA DE PEDIR UN NUMERO ENTERO
int pedirUnEntero( int* numeroIngresado)
{
	int retorno=0;
	int numero;

	scanf("%d",&numero);
	*numeroIngresado=numero;

	return retorno;
}


// ESTA FINCION SE ENCARGA DE SUMAR DOS ENTEROS

int sumar(int valorUno, int valorDos, int* resultado)
{
	int retorno;
		if(!(valorUno == NULL || valorDos == NULL))
		{
			*resultado= valorUno + valorDos;
			retorno=0;
		}
		else
		{
			retorno=-1;
		}

	return retorno;
}

