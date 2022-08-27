/*
 ============================================================================
 Name        : Ejercicio3-1.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define DIAS 31

int main(void) {

	setbuf(stdout, NULL);

	float temperatura[31];
	int diaDelMes;
	float bufferTemperatura;
	int i;
	int opcionDelMenu;
	int retorno;


	inicializalArrayFloat( temperatura, 31,0);

	do
	{

		retorno = utn_getNumero(&opcionDelMenu, "\n\nElija una opcion: \n1-IMPRIOMIR ARRAY\n2-CARGAR ARRAY\n3-SALIR \n", "\nERROR, tiene que elegir opcion 1 o 2 :",1, 2, 3);


		if(retorno == 0)
		{


			switch (opcionDelMenu) {
				case 1:
					for (i = 0; i < DIAS; ++i)
					{
						if(temperatura[i]!=0)
						{
							printf("En el Dia %d  la temperatura fue %.2f° \n",i+1,temperatura[i]);
						}
					}


					break;
				case 2:
					utn_getNumero(&diaDelMes, "Ingrese un dia del mes: \n ", "ERROR, el dia tiene que ser del 1 al 31\n", 1, 31, 2);
					utn_getNumeroConDecimales(&bufferTemperatura, "Ingrese la temperatura maxima de este dia: \n", "ERROR, reintente: \n",  -100, 100, 2);
					temperatura[diaDelMes-1]=bufferTemperatura;

					break;
				default:

					break;
		}
	}

}while(opcionDelMenu != 3);


	return EXIT_SUCCESS;
}
