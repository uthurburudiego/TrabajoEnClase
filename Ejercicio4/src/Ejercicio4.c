/*
 ============================================================================
 Name        : Ejercicio4.c
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
	int continuar;
	int minimo;
	int maximo;
	int flag=0;


	do
	{
		// Tomamos el dato
		printf("Ingrese un numero:");
		scanf("%d",&numeroIngresado);

		//Esta bandera es para captar la primera pasada del programa
		if(flag==0)
		{
			minimo=numeroIngresado;
			maximo=numeroIngresado;
			flag=1;
		}
		else
		{
			//Capturamos el numero minimo
			if(numeroIngresado < minimo)
			{
				minimo=numeroIngresado;
			}
			else
			{
				//Capturamos el numero maximo
				if(numeroIngresado > maximo)
				{
					maximo= numeroIngresado;
				}
			}

		}
		//Preguntamos si la persona desea continuar
		printf("si desea salir marque (888)");
		scanf("%d", &continuar);

	}while(continuar!=888);


	printf("El numero Maximo ingresado fue : %d \n",maximo);
	printf("El numero Minimo ingresado fue : %d \n",minimo);

	return EXIT_SUCCESS;
}
