// Archivo: exit-wait-2.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int pid;
	if( ( pid = fork() ) == 0 )	/* hijo */
	{
		sleep( 15 );
		return 15;	// equivale a exit(15)
	}
	else	/* padre */
	{
		int status, p ;
		printf("ESPERAMOS a %d \n" , pid );
		p = wait( &status );
		printf("de %d llega %d \n" , p , WEXITSTATUS( status ) );
	}
	return 0;	// salida exitosa del programa
}
// Fin del archivo: exit-wait-2.c
