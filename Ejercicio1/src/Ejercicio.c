/*
 ============================================================================
 Name        : Ejercicio1.c
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

	int numeroUno;
	int numeroDos;
	int suma;
	int resta;
	int multiplicacion;
	int division;

	// Tomamos los datos
	printf("Ingrese un numero: ");

	scanf("%d",&numeroUno);

	printf("Ingrese otro numero: ");

		scanf("%d",&numeroDos);
// Calculamos la suma y lo mostramos
	suma=numeroUno + numeroDos;

	printf("El resultado de la suma es: %d \n", suma);
// Calculamos la resta y lo mostramos
	resta=numeroUno - numeroDos;

	printf("El resultado de la resta es: %d \n", resta);

//Calculamos la multiplicacion y mostramos
	multiplicacion=numeroUno * numeroDos;

	printf("El resultado de la multiplicacion es: %d \n", multiplicacion);

// Calculamos la division y mostramos

	division=numeroUno / numeroDos;

	printf("El resultado de la division es: %d \n", division);





	return EXIT_SUCCESS;
}
