// Archivo: guardamos-punteros.c
#include <stdio.h>
int main()	// comienza la funci�n principal ejecutable
{
	int i = 13;
	double d = 3.14;
	int * pi;	// pi tiene el tipo de dato "puntero a entero"
	double * pd;	// pd tiene el tipo de dato "puntero a double"
	pi = &i;	// guarda la direcci�n en memoria de i en pi
	pd = &d;	// guarda la direcci�n en memoria de d en pd
	printf("i vale:	%d  , y est� en: %p \n" , i , pi );
	printf("d vale:	%f  , y est� en: %p \n" , d , pd );
	return 0;	// salida exitosa del programa
}	
// Fin del archivo: guardamos-punteros.c
