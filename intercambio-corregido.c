// Archivo: intercambio-corregido.c

#include <stdio.h>

// Prototipo de la función swap
int swap( int * , int * );

int main()
{
	int a = 12, b = 13;
	int * pa = &a, * pb = &b;
	printf(" a = %d y b = %d \n", a , b );
	swap( pa , pb );
	printf("Ahora a = %d y b = %d \n", *pa , *pb );
}

// implementación de la función swap
int swap( int * pi , int * pj)
{
	int tmp = *pi;
	*pi = *pj;
	*pj = tmp;
}
// Fin del archivo: intercambio-corregido.c
