// Archivo: arreglo-de-punteros.c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
	int indice, * a[SIZE];
	int primera = 1, segunda = 2, tercera = 3, cuarta = 4, quinta = 5;
	int * pprimera = &primera, * psegunda = &segunda, * ptercera = &tercera;
	int * pcuarta = &cuarta, * pquinta = &quinta;
	a[0] = pprimera;
	a[1] = psegunda;
	a[2] = ptercera;
	a[3] = pcuarta;
	a[4] = pquinta;
	printf("\n");
	for( indice = 0 ; indice < SIZE ; indice++ )
	{
		printf("\n a[ %d ] = %d en %p ", indice , *(a[indice]), a[indice] );
	}
	printf("\n");
	return 0;	// salida exitosa del programa
}
//Fin del archivo: arreglo-de-punteros.c
