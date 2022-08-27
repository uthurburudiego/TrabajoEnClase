/*
 ============================================================================
 Name        : Ejercicio2-2.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description :	Ingresar 10 números enteros, distintos de cero. Mostrar:
				a. Cantidad de pares e impares.
				b. El menor número ingresado.
				c. De los pares el mayor número ingresado.
				d. Suma de los positivos.
				e. Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TAM 10

int main(void) {

	setbuf(stdout, NULL);

	int numeroIngresado;
	int numerosPares=0;
	int numerosImpares=0;
	int menorNumero;
	int mayorNumero;
	int acumuladorPositivos=0;
	int producto=1;
	int flag=0;

	for (int i = 0; i <TAM ; i++)
	{
		printf("Ingrese un numero:");
		pedirUnEntero(&numeroIngresado);

		if (i==0) 					//controlamos la primera ves que se ingresa un numero
		{

			menorNumero=numeroIngresado;
		}
		if (numeroIngresado%2 == 0 && flag==0) // aqui controlamos que sea la primera ves que se ingresa un un numero par
		{
			mayorNumero=numeroIngresado;
			flag=1;
		}


			if (menorNumero > numeroIngresado)
			{
				menorNumero= numeroIngresado;
			}


		if(numeroIngresado%2 == 0 )	//contamos los numeros pares
		{
			if (mayorNumero < numeroIngresado)
					{
						mayorNumero=numeroIngresado;
					}

			numerosPares++;

		}
		else						//contamos los numeros impares
		{
			numerosImpares++;
		}


		if (numeroIngresado<0)
		{
			producto=numeroIngresado* producto;
		}
		else
		{
			acumuladorPositivos=acumuladorPositivos+numeroIngresado;

		}

	}

	printf("Cantidad de pares : %d   \n",numerosPares);
	printf("Cantidad de impares: %d   \n",numerosImpares);
	printf("El menor número ingresado: %d   \n",menorNumero);
	printf("El mayor número par ingresado: %d   \n",mayorNumero);
	printf("Suma de los positivos: %d   \n",acumuladorPositivos);
	printf("Producto de los negativos: %d   \n",producto);




	return EXIT_SUCCESS;
}
