/*
 ============================================================================
 Name        : Ejercicio2-3.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description : 	Debemos alquilar el servicio de transporte para llegar a Mar del
 	 	 	 	Plata con un grupo de personas, de cada persona
				debemos obtener los siguientes datos:
				* número de cliente,
				* estado civil ('s' para soltero", 'c' para casado o 'v' viudo),

				* edad( solo mayores de edad, más de 17),
				* temperatura corporal (validar por favor)
				* genero('f' para femenino, 'm' para masculino, 'o' para no binario).


				NOTA: El precio por pasajero es de $600.
				Se debe informar (solo si corresponde):
				a) La cantidad de personas con estado "viudo" de más de 60 años.
				b) el número de cliente y edad de la mujer soltera más joven.
				c) cuánto sale el viaje total sin descuento.
				d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
				 el precio final tiene un descuento del 25%, que solo mostramos si
				 corresponde.


				 20*50/100=10
				 10/50*100=20
				 20*x/100=10
				 10.100/20=50

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PRECIO 600

int main(void)
{
	setbuf(stdout, NULL);

	int numeroCliente;
	int edad;

	float temperatura;
	char continuar;
	char genero;
	char estadoCivil;

	int flag=0;
	int numeroClienteJoven;
	int edadDeJoven;
	int totalSinDescuento;
	int contadorDeViudos=0;
	float totalConDescuento;
	int contadorPasajeros=0;
	float porcentajeAncianos;
	int contadorAncianonos=0;



	do {

		//PEDIMOS EL NUMERO DE CLIENTE
		printf(" Ingresar N° de Cliente :");
		scanf("%d",&numeroCliente);

		// PEDIMOS EL ESTADO CIVIL Y VALIDAMOS QUE ELIJA UNA OPCION CORRECTA
		printf(" Ingresar Estado Civil  SOLTERO= 's'/ CASADO='c'/ VIUDO='v'  :");
		scanf("%c",&estadoCivil);

		while(estadoCivil != 's' && estadoCivil!= 'c' && estadoCivil!= 'v')
		{
			printf(" ERROR!!! Ingresar Estado Civil  SOLTERO= 's'/ CASADO='c'/ VIUDO='v'  :");
			scanf("%c",&estadoCivil);
		}

		//PEDIMOS QUE INGRESE LA EDAD DEL CLIENTE
		printf("Ingrese la edad:");
		scanf("%d",&edad);

		while(edad<0)
		{
			printf("ERROR!!! Ingrese la edad:");
			scanf("%d",&edad);

		}

		//PEDIMOS LA TEMPERATURA DEL CLIENTE
		printf("Ingrese la temperatura del cliente :");
		scanf("%f",&temperatura);
		while(temperatura > 38 && temperatura < 34)
		{
			if(temperatura < 34)
			{
				printf("Con hipotermia no puede viajar");

			}
			else
			{
				if(temperatura> 37)
				{
					printf("Con fiebre no puede viajar");
				}
			}

			printf("Ingrese nuevamente la temperatura del cliente : ");
			scanf("%f",&temperatura);
		}

		//PEDIMOS QUE SE INGRESE EL GENERO DE NUESTRO CLIENTE Y VALIDAMOS

		printf("Ingrese el genero del cliente: FEMENINO 'f'/ MASCULINO 'm'/ NO BINANIO 'O'");
		scanf("%c",&genero);

		while(genero!='f' && genero!= 'm' && genero!='o')
		{
			printf("ERROR!!!! Ingrese el genero del cliente: FEMENINO 'f'/ MASCULINO 'm'/ NO BINANIO 'O'");
			scanf("%c",&genero);
		}

		if (edad >60 )
		{
			contadorAncianonos++;
		}
		contadorPasajeros++;



		// a) La cantidad de personas con estado "viudo" de más de 60 años.


		if(estadoCivil == 'v' && edad > 60 )
		{
			contadorDeViudos++;
		}
		// b) el número de cliente y edad de la mujer soltera más joven.

		if (flag==0 && genero== 'f' && estadoCivil == 's')
		{
			numeroClienteJoven=numeroCliente;
			edadDeJoven=edad;
		}

		if (edadDeJoven > edad && genero == 'f' && estadoCivil=='s')
		{
			edadDeJoven=edad;
			numeroClienteJoven=numeroCliente;
		}





		//PREGUNTAMOS AL USUARIO SI DESEA SALIR Y VALIDAMOS PARA QUE ELIJA LA OPCION CORRECTA

		printf("\n  Desea continuar ? SI='s' o NO='n' \n");
		scanf("%c",&continuar);

		while(continuar != 's' && continuar!= 'n')
		{
			printf("\n  ERROR!!!! Desea continuar ? SI='s' o NO='n' \n");
			scanf("%c",&continuar);
		}

	} while (continuar=='s');

	porcentajeAncianos= (contadorAncianonos*100)/contadorPasajeros;

	totalSinDescuento = contadorPasajeros * PRECIO ;

	totalConDescuento = totalSinDescuento *.75;


	if(contadorDeViudos != 0)
	{
		printf("\n La cantidad de personas con estado 'viudo' de más de 60 años es: %d   \n", contadorDeViudos);
	}

	printf("\n Con el número %d de cliente y %d años es la mujer soltera más joven  \n ", numeroClienteJoven,edadDeJoven);

	printf("\n El total del viaje sin descuento es: $ %d \n", totalSinDescuento);

	if(porcentajeAncianos>= 50)
	{
		printf("\n  El total del viaje con descuento es: $ %f \n", totalConDescuento);
	}


	return EXIT_SUCCESS;
}
