/*
 ============================================================================
 Name        : Ejercicio5.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"
#include "utn.h"
#include "Producto.h"
#include <string.h>




int main(void)
{

	setbuf(stdout, NULL);

	Producto productos[TAM];



	inicializarArrayProducto(productos, TAM, 1);


	prod_cargarProducto(productos,TAM,1);
	prod_cargarProducto(productos,TAM,12);

imprimirArrayProducto(productos, TAM);


	return EXIT_SUCCESS;
}

