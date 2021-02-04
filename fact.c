/*****
 * Función factorial: esta versión NO ES UNA
 * FUNCIÓN RECURSIVA DE COLA.
 * Pues:
 * 	No retorna constante o expresión simple
 * 	Cuando se llama a sí misma RETORNA OTRA OPERACIÓN MAS.
 ****/

int fact( int i ){
	if( i == 0 ) return 1;
	else return i*fact( i - 1 );
}

#include <stdio.h>

int main(){
	int a = 1;
	printf("El factorial de 1 es: %4d \n", fact( a ) );

	a = 5;
        printf("El factorial de 5 es: %4d \n", fact( a ) );

	a = 6;
        printf("El factorial de 6 es: %4d \n", fact( a ) );
}
