// Archivo: dup-redireccion-entrada-salida.c

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd = open( "test2.txt" , O_WRONLY|O_CREAT|O_TRUNC , 0666 );
	/*	Tabla de descriptores de ficheros:
	 *	0	STDIN
	 *	1	STDOUT
	 *	2	STDERR
	 *	·
	 *	·
	 *	fd	test2.txt
	 *	·
	 *	·
	 */
	
	close( 1 );	// cierra STDOUT
	/*	Tabla de descriptores de ficheros:
	 *	0	STDIN
	 *	1		{CERRADO queda libre	
	 *	2	STDERR
	 *	·
	 *	·
	 *	fd	test2.txt
	 *	·
	 *	·
	 */
	
	dup( fd );
	/*	Tabla de descriptores de ficheros:
	 *	0	STDIN
	 *	1	test2.txt	{dup le da el menor	
	 *	2	STDERR
	 *	·
	 *	·
	 *	fd	test2.txt
	 *	·
	 *	·
	 */
	
	close( fd );
	/*	Tabla de descriptores de ficheros:
	 *	0	STDIN
	 *	1	test2.txt		
	 *	2	STDERR
	 *	·
	 *	·
	 *	fd		{CERRADO queda libre
	 *	·
	 *	·
	 */
	
	execl( "/bin/ls" , "test2.txt" , NULL );
	perror( " ERROR " );
	return 0;	// salida satisfactoria del programa
}
// Fin del archivo: dup-redireccion-entrada-salida.c
