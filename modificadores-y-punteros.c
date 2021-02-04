// Archivo: modificadores-y-punteros.c
#include <stdio.h>
int main(){
	int i = 10, j = 5;
	int * pi = &i;		// CORRECTO
	pi = &j;		// CORRECTO
	*pi = 0;		// CORRECTO

	const int * pj = &j;	
	// CORRECTO: El modificador const aplica a int primeramente,
	// es decir, que lo que permanece constante es el valor del
	// entero que está siendo apuntado. 
	// Se trata entonces de un puntero a una variable entera constante,
	// un puntero a una variable entera de solo lectura.
	// Observar que se puede cambiar el valor del puntero, pero no se
	// puede cambiar el valor de la variable a la que apunta.
	
	pj = &i;		// CORREECTO
	// Se puede cambiar el valor del puntero (una dirección de memoria)
	
	*pj = 20;
	// NO SE PUEDE CAMBIAR EL VALOR DE LA VARIABLE ENTERA APUNTADA POR SER const
	
	int * const pk = &i;
	// CORRECTO: El modificador const aplica a pk primeramente, es decir,
	// que lo que permanece constante es el valor del puntero, por lo tanto
	// se trata de un puntero que apunta siempre a la misma dirección de 
	// memoria, mientras que el valor de la variable entera que está siendo 
	// apuntada puede cambiar su valor.
	
	pk = &j;	// NO SE PUEDE CAMBIAR EL VALOR DEL PUNTERO
			// (LA DIRECCIÓN DE MEMORIA A LA QUE APUNTA)
			// PORQUE ES const

	*pk = 30;	// CORRECTO

	const int * const pl = &i;
	// CORRECTO: Se trata del caso extremo. Un puntero con valor constante,
	// que apunta siempre a la misma dirección de memoria, y cuya variable
	// entera apuntada también es constante, es decir, la variable entera
	// no se puede modificar.
	
	pl = &j ;	//ERROR

	*pl = 40 ;	//ERROR

	return 0;
}
// Fin del archivo: modificadores-y-punteros.c
