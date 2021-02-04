/******
 * Transformamos la función "facttr" en una iteración
 * agregando una ETIQUETA y una sentencia "goto"
 ******/

#include <stdio.h>

int fact_iteracion( int i , int res ){
	sigue:	// Etiqueta para la sentencia "goto"
		if( i == 0 ) return res;
		else{
			res *= i;
			i -= 1;
			goto sigue;
		}
}
// Nuevamente   n!= fact_iteracion( n , 1 )

int main(){
	int res = 1;	// res vale 1 para todos los casos

	int i = 0;
	printf("El factorial de 0 es: %4d \n", fact_iteracion( i , res ) );

	i = 1;
        printf("El factorial de 1 es: %4d \n", fact_iteracion( i , res ) );

	i = 5;
        printf("El factorial de 5 es: %4d \n", fact_iteracion( i , res ) );
		
	i = 6;
        printf("El factorial de 6 es: %4d \n", fact_iteracion( i , res ) );
}	
