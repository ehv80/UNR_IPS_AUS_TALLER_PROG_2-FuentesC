// Archivo: pipe.c
#include <stdio.h>
#include <unistd.h>

#define SIZE 1024

int main()
{
	int pip[ 2 ], cuanto;
	char linea[SIZE];
	pipe( pip );
	write( pip[1] , "HOLA MUNDO!!!" , 13 );
	cuanto = read( pip[0] , linea , SIZE );
	linea[cuanto] = 0;
	printf("[%s]\n" , linea );
	close( pip[0] );
	close( pip[1] );
	return 0;	// salida exitosa del programa
}
// Fin del archivo: pipe.c
