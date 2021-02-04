/*****
 * Funci�n factorial en VERSI�N RECURSIVA DE COLA.
 * Una Funci�n es RECURSIVA DE COLA SI:
 * 	a) Devuelve constantes o expresiones simples
 * 	b) Cuando se llama a s� misma retorna 
 * 		SIN NINGUNA OTRA OPERACI�N.
 *****/

#include <stdio.h>

int facttr( int i , int res ){
	if( i == 0 ) return res;
	else return facttr( i-1 , res*i );
}
/* La ventaja de una funci�n recursiva de cola es que
 * puede ejecutarse en un bloque de memoria de tama�o
 * constante, es decir se COMPORTA COMO UNA ITERACI�N.
 * SE DEBE TENER EN CUENTA QUE:
 * 	n! = facttr( n , 1 )
 *
 * 	Es decir res = 1 para todos los casos.
 **/

int main(){
	int res = 1; // res vale 1 para todos los casos.
	
	int i = 0;
	printf("El factorial de 0 es : %4d \n" , facttr( i , res ));
	
	i = 1;
	printf("El factorial de 1 es : %4d \n" , facttr( i , res ));

	i = 5;
	printf("El factorial de 5 es : %4d \n" , facttr( i , res ));

	i = 6;
        printf("El factorial de 6 es : %4d \n" , facttr( i , res ));
}
