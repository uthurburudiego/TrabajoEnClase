/*
 ============================================================================
 Name        : Ejercicio1-3.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description : Mostrar entre tres numeros, cual es el del medio
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

	int elDelMedio;
	int validar;


	printf("Ingrese un numero:");
	pedirUnEntero( &numeroUno);

	printf("Ingrese otro numero:");
	pedirUnEntero( &numeroDos);

	printf("Ingrese un numero mas :");
	pedirUnEntero( &numeroTres);



		//aqui validamos que sea el numeroDos

	if ((numeroUno > numeroDos && numeroDos > numeroTres) || (numeroTres> numeroDos && numeroDos > numeroUno) )
	{
		elDelMedio =  numeroDos;
		validar=0;
	}
	else
	{
		// aqui validamos que sea el numeroUno
	if((numeroDos> numeroUno && numeroUno > numeroTres) || (numeroTres > numeroUno && numeroUno > numeroDos))
		{
			elDelMedio=numeroUno;
			validar=0;
		}
		else
		{
			//aqui validamos que sea el numeroTres
			if((numeroUno> numeroTres && numeroTres > numeroDos) || (numeroDos> numeroTres && numeroTres > numeroUno))
			{
				elDelMedio=numeroTres;
				validar=0;
			}
			else
			{
				validar=1;
			}
		}
	}

	if(validar == 0)
	{
		printf("el numero del medio es: %d",elDelMedio);
	}else
	{
		printf("No hay un numero del medio");
	}
return EXIT_SUCCESS;
}
