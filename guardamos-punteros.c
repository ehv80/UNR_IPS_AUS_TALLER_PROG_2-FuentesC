// Archivo: guardamos-punteros.c
#include <stdio.h>
int main()	// comienza la función principal ejecutable
{
	int i = 13;
	double d = 3.14;
	int * pi;	// pi tiene el tipo de dato "puntero a entero"
	double * pd;	// pd tiene el tipo de dato "puntero a double"
	pi = &i;	// guarda la dirección en memoria de i en pi
	pd = &d;	// guarda la dirección en memoria de d en pd
	printf("i vale:	%d  , y está en: %p \n" , i , pi );
	printf("d vale:	%f  , y está en: %p \n" , d , pd );
	return 0;	// salida exitosa del programa
}	
// Fin del archivo: guardamos-punteros.c
