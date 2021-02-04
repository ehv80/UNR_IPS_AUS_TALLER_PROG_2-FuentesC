// Archivo: arreglo-de-arreglos.c
#include <stdio.h>

#define FILAS 4
#define COLUMNAS 4

int main()
{
	int indice, fila, columna, a[]={1,2,3,4}, b[FILAS][COLUMNAS]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	printf("\n"); 
	for( indice = 0 ; indice < FILAS ; indice++ )
	{
		printf("\n a[%d] = %d  ", indice , a[indice] );
	}
	printf("\n"); 
	for( fila = 0 ; fila < FILAS ; fila++ )
	{
		printf("\n");
		for( columna = 0; columna < COLUMNAS ; columna++ )
		{
			printf(" b[%d][%d] = %d ", fila, columna, b[fila][columna] );
		}
		printf("\n");
	}
	return 0;	// salida exitosa del programa
}
// Fin del archivo: arreglo-de-arreglos.c
