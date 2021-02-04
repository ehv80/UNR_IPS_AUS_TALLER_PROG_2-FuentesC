// Archivo: estructuras-y-funciones.c
#include <stdio.h>

struct registro {
	int i; 	double d; char c;
};

// prototipo de la función crearRegistro
struct registro crearRegistro( int , double , char );

// prototipo de la función mostrarRegistro
void mostrarRegistro( struct registro * );

/* Función: crearRegistro
 * Destinada a la creación de variables del tipo "struct registro"
 * Retorna : una variable del tipo "struct registro"
 * Parámetros que recibe: un entero, un double, un char
 */
struct registro crearRegistro( int i , double d , char c )
{
	struct registro tmp = { i , d , c };
	return tmp;
}

/* Función: mostrarRegistro
 * Destinada a imprimir en pantalla el registro
 * Retorna: void (nada)
 * Parámetros que recibe: un "puntero a struct registro"
 */
void mostrarRegistro( struct registro * preg )
{
	printf("\n-------------------------------------------------\n");
	printf("Registro conformado por: \n");
	printf("	preg -> i = %d \n" , preg -> i );
	printf("	preg -> d = %f \n" , preg -> d );
	printf("	preg -> c = %c \n" , preg -> c );
	printf("\n-------------------------------------------------\n");
}

int main() 
{
	// Se declaran e inicializan variables del tipo "struct registro"
	struct registro reg1 = crearRegistro( 1 , 1.1 , '1' );
	struct registro reg2 = crearRegistro( 2 , 2.2 , '2' );

	/*  Se declaran e inicializan variables del tipo:
	 *  puntero a "struct registro"         	 */
	struct registro * preg1 = &reg1 , * preg2 = &reg2 ;
	
	mostrarRegistro( preg1 );
	mostrarRegistro( preg2 );
	
	return 0;	// salida exitosa del programa
}
// Fin del archivo: estructuras-y-funciones.c
