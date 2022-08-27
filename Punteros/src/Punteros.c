/*
 ============================================================================
 Name        : Punteros.c
 Author      : Diego Uthurburu
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int jugar(int* n, int* m)
{
	int y=*n;
	int t=*m;
	y = (y+t);
	*n = y;
	printf("%d \n", y);
	return 0;
}

int main(void) {

	setbuf(stdout, NULL);



int x = 10 ;
int y =20;

jugar (&x, &y);

printf("%d \n", x);

	return EXIT_SUCCESS;
}



