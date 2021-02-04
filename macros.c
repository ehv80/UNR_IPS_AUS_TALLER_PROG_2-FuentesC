// Archivo: macros.c
#include <stdio.h>
#define	porsiempre	for( ; ; )
#define		max( A , B )		( (A) > (B) ? (A) : (B) )
#define		dprintf( expr )		printf(#expr " = %g\n", expr )
#define	paste( front , back )		front ## back
int main()
{
	//porsiempre;
	int a = 11, b = 99;
	printf("a = %d y b = %d \n", a , b );
	printf("El mayor es: %d \n", max( a , b ) );
	dprintf( b/a );
	char * cadena1 = paste( cadena  , 1  );
	printf( "\n %s \n" , cadena1 );
	return 0;
}
// Fin del archivo: macros.c
