// Archivo: fork-pipe.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
	int pip[2];
	pipe( pip );
	if( fork() )	/* padre */
	{
		write( pip[1] , "HOLA MUNDO\n" , 12 );
		wait( NULL );
	}
	else	/* hijo */
	{
		char l[1024];
		int cuanto = read( pip[0] , l , sizeof( l ) );
		l[cuanto] = 0;	// indica fin
		printf("llega [ %s ] \n" , l );
	}
	return 0;	// salida exitosa del programa
}
// Fin del archivo: fork-pipe.c
