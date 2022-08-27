/*Name        : Ejercicio 1-3 guia sabados

 Description : Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de
la UTN FRA, los datos solicitados son:

	Legajo
	Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
	Cantidad de materias( mas de 0 y menos de 8)
	Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
	Nota promedio (entre 0 y 10)
	Edad (validar)

Se debe informar de existir, o informar que no existe , en el caso que corresponda.

	a) El Legajo del mejor promedio femenino.
	b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
	c) El promedio de nota por sexo.
	d) La edad y legajo del que cursa más materias. (Sin importar su género)
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CURSADA 10


int main(void)
{
	setbuf(stdout, NULL);
	int continuar;
	int legajo;
	char TipoCursada[CURSADA];
	int cantidadMaterias;
	char sexo;
	int nota;
	int edad;


	do
	{

		printf("Ingrese numero de legajo: ");
		scanf("%d",&legajo);
		while(legajo<0 || legajo >99999 )
		{
			fflush(stdin);
			printf("ERROR, Ingrese numero de legajo: ");

			scanf("%d",&legajo);
		}














// ---------------------SALIDA DEL BUCLE  -------------------------------------
	printf("Desea continuar  ( 0-NO  1-SI )");
	scanf("%d",&continuar);
	while(continuar!=0 && continuar !=1)
	{
		printf("ERROR,Desea continuar  ( 0-NO  1-SI )");
		fflush(stdin);
		scanf("%d",&continuar);
	}

	} while (continuar!=0);

	printf("El programa finalizo");



	return EXIT_SUCCESS;
}
