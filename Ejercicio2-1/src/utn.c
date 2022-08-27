/*
 * utn.c
 *
 *  Created on: 24 abr. 2022
 *      Author: Diego Uthurburu
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
		if(valorUno != NULL || valorDos != NULL)
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


// ESTA FUNCION SE ENCARGA DE VERIFICAR ENTRE TRES NUMEROS CUAL ES EL MAYOR
int mayorDeTres(int numeroUno, int numeroDos, int numeroTres, int* elMayor)
{
	int retorno=0;

	if(numeroUno > numeroDos && numeroDos > numeroTres)
		{
			*elMayor=numeroUno;
		}
			else
			{
				if(numeroDos > numeroUno && numeroDos > numeroTres)
				{
					*elMayor=numeroDos;
				}
					else
					{
						if(numeroTres > numeroUno && numeroTres > numeroDos)
						{
							*elMayor=numeroTres;
						}


					}

			}
	return retorno;
}

int numeroIntermedio(int numeroUno, int numeroDos, int numeroTres, int* elDelMedio)
{
	int retorno=0;
	// aqui validamos que sea el numeroDos
	if (numeroUno > numeroDos && numeroDos > numeroTres)
	{
		*elDelMedio =  numeroDos;
	}
	else
	{
		if(numeroTres> numeroDos && numeroDos > numeroUno)
		{
			*elDelMedio = numeroDos;
		}
		else
		{

		// aqui validamos que sea el numeroUno
		if(numeroDos> numeroUno && numeroUno > numeroTres)
		{
			*elDelMedio=numeroUno;
		}
		else
		{
			if(numeroTres > numeroUno && numeroUno > numeroDos)
			{
				*elDelMedio=numeroUno;
			}
		}
			//aqui validamos que sea el numeroTres
				if(numeroUno> numeroTres && numeroTres > numeroDos)
				{
					*elDelMedio=numeroTres;
				}
				else
				{
					if(numeroDos> numeroTres && numeroTres > numeroUno)
					{
						*elDelMedio=numeroTres;
					}
					else
					{
						retorno=-1;
					}

				}
		}
	}


	return retorno;
}

//ESTA FUNCION REALIZA EL PROMEDIO DE NUMEROS ENTEROS
int promedio(int acumulador, int divisor, int* resultado)
{
	int retorno;
	int totalPromedio;

	totalPromedio=acumulador/divisor;
	*resultado=totalPromedio;
	retorno=0;

	return retorno;
}

