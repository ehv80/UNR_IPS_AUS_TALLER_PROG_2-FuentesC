// Archivo: intercambio.c

#include <stdio.h>

// Prototipo de la funci�n swap
int swap( int , int );

int main()
{
	int a = 12, b = 13;
	printf(" a = %d y b = %d \n", a , b );
	swap( a , b );
	printf("Ahora a = %d y b = %d \n", a , b );
}

// implementaci�n de la funci�n swap
int swap( int i , int j)
{
	int tmp = i;
	i = j;
	j = tmp;
}
// Fin del archivo: intercambio.c
