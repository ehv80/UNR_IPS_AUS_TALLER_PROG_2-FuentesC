// Archivo: entrada-salida-estandar.c

#include <unistd.h>

int main()
{
	char buffer[1024]; int cuanto;
	
	cuanto = read( 0 , buffer , sizeof(buffer) );
	// Lee desde el teclado y guarda en el descriptor de fichero 0
	// (entrada estandar: teclado
	// lo que hay en el buffer temporal de lectura
	
	buffer[cuanto] = 0;
	buffer[0]++;	// modifica el primer caracter del buffer
	
	write( 1 , buffer , cuanto );
	// Escribe lo que hay en el buffer en el archivo cuyo descriptor
	// de fichero es 1 (salida estandar: consola)
	
	return 0;	// salida exitosa del programa
}
// Fin del archivo: entrada-salida-estandar.c
