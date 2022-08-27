/*
 * Producto.h
 *
 *  Created on: 23 may. 2022
 *      Author: diego
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#define REINTENTOS 3
#define TAM 100
#define NOMBRE_LEN 50
#define TAM_DESCRIPCION 256
#define RESPUESTA 3
#define DESCUENTO 25

typedef struct
{
	char nombre[TAM];
	float precio;
	char descripcion[TAM_DESCRIPCION];

	int indice;
	float precioConDescuento;
	int isEmpty;

}Producto;


int imprimirArrayProducto(Producto* pArray, int limite);

int inicializarArrayProducto(Producto* pArray, int limite, int inicializar);
int imprimirProductos(char* nombre, char* descripcion, float precio, float descuento);
int prod_cargarProducto(Producto* pArray,int limite, int indice );
int precioDescuento(float* pResultado, float precio, float descuento);
#endif /* PRODUCTO_H_ */
