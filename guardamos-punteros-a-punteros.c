// Archivo: guardamos-punteros-a-punteros.c
#include <stdio.h>
int main()
{
	int i , * pi;		// i es del tipo entero, pi es del tipo "puntero a entero"
	double d , * pd;	// d es del tipo double, pd es del tipo "puntero a double"
	int ** ppi; double ** ppd;	// ppi es del tipo "puntero a puntero a entero"
					// ppd es del tipo "puntero a puntero a double"
	i = 13 ; d = 3.14;	
	pi = &i ; pd = &d;	// guarda la direcci�n en memoria de i en pi
				// guarda la direcci�n en memoria de d en pd
				
	ppi = &pi ; ppd = &pd;	// guarda la direcci�n en memoria de pi en ppi
				// guarda la direcci�n en memoria de pd en ppd
	printf(" i   vale %d , y est� en %p \n" , i , pi );
	printf(" pi  vale %p , y est� en %p \n" , pi , ppi );
	printf(" ppi vale %p , y est� en %p \n" , ppi , &ppi );
	printf("\n d vale %f , y est� en %p \n" , d , pd );
	printf(" pd  vale %p , y est� en %p \n" , pd , ppd );
	printf(" ppd vale %p , y est� en %p \n" , ppd , &ppd );
	return 0;	// salida exitosa del programa
}
// Fin del archivo: guardamos-punteros-a-punteros.c
