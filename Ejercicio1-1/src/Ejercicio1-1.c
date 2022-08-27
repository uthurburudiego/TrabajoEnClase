/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description :Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese un numero : ");
	scanf("%d",&numeroUno);

	printf("Ingrese otro numero : ");
	scanf("%d",&numeroDos);

	resultado = numeroUno + numeroDos;

	printf("El resultado de la suma es : %d",resultado);






	return EXIT_SUCCESS;
}
