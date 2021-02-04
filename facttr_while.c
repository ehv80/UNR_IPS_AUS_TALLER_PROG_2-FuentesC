/*****
 * La función factorial implementada con un bucle "while"
 * pues la cantidad de repeticiones dependerán del valor de
 * n en n!.
 *****/

#include <stdio.h>

int facttr_while( int i )
{
	int res = 1;
	while( i != 0 ){
		res *= i;
		i--;
	}
	return res;
}
// Vuelve la función a tomar un único parámetro.

int main(){
	int i = 0;
	printf(" El factorial de %d es %4d \n" , i , facttr_while( i ) );

	i = 1;
        printf(" El factorial de %d es %4d \n" , i , facttr_while( i ) );

	i = 5;
        printf(" El factorial de %d es %4d \n" , i , facttr_while( i ) );

	i = 6;
        printf(" El factorial de %d es %4d \n" , i , facttr_while( i ) );
}
		
		
