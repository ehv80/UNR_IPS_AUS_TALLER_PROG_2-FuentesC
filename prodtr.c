/******
 * Versión RECURSIVA DE COLA de la función "prod".
 ******/

#include <stdio.h>

unsigned int prodtr( unsigned int m , unsigned int n , unsigned int res ){
	if( n == 1 ) return res + m;
	else if( ( n & 1 ) == 0 ) return prodtr( m << 1 , n >> 1 , res );
	else return prodtr( m << 1 , n >> 1 , res + m );
}

int main(){
	unsigned int res = 0;
	unsigned int m = 1;
	unsigned int n = 1;
	printf("El producto  %d por %d  es: %4d \n", m, n, prodtr( m, n, res) );
	
	m = 1;
        n = 2;
        printf("El producto  %d por %d  es: %4d \n", m, n, prodtr( m, n, res) );

	m = 2;
        n = 2;
        printf("El producto  %d por %d  es: %4d \n", m, n, prodtr( m, n, res) );

	m = 2;
        n = 3;
	printf("El producto  %d por %d  es: %4d \n", m, n, prodtr( m, n, res ) );

	m = 7;
        n = 9;
        printf("El producto  %d por %d  es: %4d \n", m, n, prodtr( m, n, res ) );
			
	m = 9;
        n = 12;
        printf("El producto  %4d por %4d  es: %4d \n", m, n, prodtr( m, n, res ) );
}
