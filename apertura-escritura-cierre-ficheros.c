// Archivo: escritura-lectura-ficheros.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define VECES 10

/* Función: error
 * Muestra un mensaje de error en pantalla.
 * Retorna: void
 * Argumentos: puntero a char, apunta a la cadena de caracteres
 * 		que posee el mensaje de error.
 */
void error( char * s )
{
	perror( s );
	exit (-1);	//salida con problemas
}

int main()
{
	double d;
	int i, fd, retardo;
	long posicion;

	if( ( fd = open( "test.txt" , O_WRONLY|O_CREAT|O_TRUNC , 0666 ) )  < 0 )
	{
		error( "\nSe ha producido un error durante la llamada a open!!!\n");
		// Los números representados en octal (base 8) comienzan con CERO
	}
	for( i = 0 ; i < VECES ; i++ )
	{
		d = i + 0.5;
		if( ( write( fd , &d , sizeof(d) ) != sizeof(d) )
		{
			error( "\nSe ha producido un error durante la llamada a write!!!\n");
		}
	}
	if( (fd = open( "test.txt" , O_RDONLY )) < 0 )
	{
		error( "\nSe ha producido un error durante la llamada a open!!!\n");
	}
	for( i = 0 ; i < VECES ; i++ )
	{
		if( ( read( fd , &d , sizeof(d) ) < 0 )
		{
			error( "\nSe ha producido un error durante la llamada a read!!!\n");
		}
		else
		{
			printf("\n %f " , d );
		}
	}
	close(fd);	// Al cerrar el fichero se actualiza la metadata
	return 0;	// salida exitosa del programa
}			
// Fin del archivo: escritura-lectura-ficheros.c
