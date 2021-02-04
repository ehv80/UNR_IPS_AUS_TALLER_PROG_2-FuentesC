// Archivo: multiproceso.c

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

int ya = 0;	// variable global

static void handler( int sig )
{
	int status;
	wait( &status );
	ya = 1;
}

int main()
{
	if( fork() == 0 )	/* hijo */
	{
		printf( "Largamos!\n");
		sleep(10);
		printf( "Chau!\n");
		exit(0);
	}
	else	/* padre */
	{
		signal( SIGCHLD , handler );
		while( ya == 0 )
			;
		printf( "Al fin!\n");
	}
	return 0;
}		
// Fin del archivo: multiproceso.c
