/*
 * Alumnos.h
 *
 *  Created on: 23 may. 2022
 *      Author: diego
 */

#ifndef ALUMNOS_H_
#define ALUMNOS_H_
typedef struct
{
	int legajos;
	char nombre[51];
	float altura;
	int isEmpty;


}Alumno;

int imprimirArrayAlumnos(Alumno* pArray, int limite);
int inicializarArrayAlumnos(Alumno* pArray, int limite, int inicializar);
#endif /* ALUMNOS_H_ */
