// Archivo: operadorReferencia.c

#include <stdio.h>

int main()	// comienza el código principal ejecutable
{
	int i, j, k;
	i = j = k = 13;
	printf(  "i = %d , j = %d , k = %d \n", i , j ,k );
	printf( "&i = %p , &j = %p , &k = %p \n" , &i , &j , &k );
	return 0; 	// salida del programa exitosa, todo ha salido bién
}
// Fin del Archivo: operadorReferencia.c
