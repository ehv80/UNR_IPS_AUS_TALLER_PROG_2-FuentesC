// Archivo: arreglo-de-punteros.c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
	int indice, * a[SIZE];
	int primera = 1, segunda = 2, tercera = 3, cuarta = 4, quinta = 5;
	a[0] = &primera;
	a[1] = &segunda;
	a[2] = &tercera;
	a[3] = &cuarta;
	a[4] = &quinta;
	printf("\n");
	for( indice = 0 ; indice < SIZE ; indice++ )
	{
		printf("\n a[ %d ] = %d en %p ", indice , *(a[indice]), a[indice] );
	}
	printf("\n");
	return 0;	// salida exitosa del programa
}
//Fin del archivo: arreglo-de-punteros.c
