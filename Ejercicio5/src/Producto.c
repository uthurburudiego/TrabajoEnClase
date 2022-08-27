/*
 * Producto.c
 *
 *  Created on: 23 may. 2022
 *      Author: diego
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "Producto.h"
#include <string.h>



/**
 * \brief Inicializo el array de alumnos
 * \param pArray Puntero al array de alumnos
 * \param limite Define el tamaño del array
 * \param inicializador Define el numero en el
 *  cual se va inicializar el array
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int inicializarArrayProducto(Producto* pArray, int limite, int inicializar)
{
	int retorno=-1;
	int i;
	if(pArray!=NULL && limite >=0)
	{
		for (i = 0; i < limite; i++)
		{
			pArray[i].isEmpty = inicializar;
			retorno=0;

		}
	}


	return retorno;
}

int precioDescuento(float* pResultado, float precio, float descuento)
{

	int retorno=-1;
	if(pResultado!=NULL && precio > 0 && descuento >=0)
	{
		*pResultado= precio - (precio * (descuento/100));
		retorno=0;
	}

	return retorno;
}

int imprimirProductos(char* aNombre, char* aDescripcion, float precio, float descuento)
{
	int retorno =-1;
if(aNombre!=NULL && aDescripcion!=NULL)
{
	printf("El nombre del producto es: %s\nDescripcion: %s\nEl precio es: $%.2f\n",aNombre,aDescripcion,precio);
	if(descuento>1)
		{
			printf("El precio con descuento es: $%.2f\n",descuento);
		}

	retorno=0;
}
	return retorno;

}
int prod_cargarProducto(Producto* pArray,int limite, int indice )
{
	int retorno=-1;
	Producto productoAux;

	if(utn_getNombre(productoAux.nombre, "Ingrese el nombre del producto: \n", "ERROR, vuelva a intentarlo: \n", NOMBRE_LEN, REINTENTOS)==0)
		{
			if(utn_getNumeroConDecimales(&productoAux.precio, "Ingrese el precio: \n", "ERROR, vuelva a intentarlo: \n", 1, 100000, REINTENTOS)==0)
			{
				if(utn_getNombre(productoAux.descripcion, "Descripcion del producto:\n", "ERROR, vuelva a intentarlo: \n", TAM_DESCRIPCION, REINTENTOS)==0)
				{
					pArray[indice]=productoAux;
					pArray[indice].isEmpty=0;
					retorno=0;
				}
			}
		}


	return retorno;
}



int imprimirArrayProducto(Producto* pArray, int limite)
{
	int retorno=-1;
		int i;
		if(pArray!=NULL && limite >0)
		{
			for (i = 0; i < limite; i++)
			{
				if(pArray[i].isEmpty == 0)
				{
					printf("Nombre : %s\nDescripcion: %s\nPrecio: %.2f\n", pArray[i].nombre,pArray[i].descripcion,pArray[i].precio);
					retorno=0;
				}
			}
		}
 return retorno;
}
