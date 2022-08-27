/*
 * Alumnos.c
 *
 *  Created on: 23 may. 2022
 *      Author: diego
 */
#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"



/**
 * \brief Imprimo el array de alumnos
 * \param pArray Puntero al array de alumnos
 * \param limite Define el tamaño del array
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int imprimirArrayAlumnos(Alumno* pArray, int limite)
{
	int retorno=-1;
	int i;
	if(pArray!=NULL && limite >0)
	{
		for (i = 0; i < limite; i++)
		{
			if(pArray[i].isEmpty == 0)
			{
				printf("nombre : %s\nLegajo: %d\nAltura: %.2f\n", pArray[i].nombre,pArray[i].legajos,pArray[i].altura);
				retorno=0;
			}
		}
	}


	return retorno;
}

/**
 * \brief Inicializo el array de alumnos
 * \param pArray Puntero al array de alumnos
 * \param limite Define el tamaño del array
 * \param inicializador Define el numero en el
 *  cual se va inicializar el array
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int inicializarArrayAlumnos(Alumno* pArray, int limite, int inicializar)
{
	int retorno=-1;
	int i;
	if(pArray!=NULL && limite >0)
	{
		for (i = 0; i < limite; i++)
		{
			pArray[i].isEmpty = inicializar;

		}
	}


	return retorno;
}
