/*****
 * Función factorial en VERSIÓN RECURSIVA DE COLA.
 * Una Función es RECURSIVA DE COLA SI:
 * 	a) Devuelve constantes o expresiones simples
 * 	b) Cuando se llama a sí misma retorna 
 * 		SIN NINGUNA OTRA OPERACIÓN.
 *****/

#include <stdio.h>

int facttr( int i , int res ){
	if( i == 0 ) return res;
	else return facttr( i-1 , res*i );
}
/* La ventaja de una función recursiva de cola es que
 * puede ejecutarse en un bloque de memoria de tamaño
 * constante, es decir se COMPORTA COMO UNA ITERACIÓN.
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
