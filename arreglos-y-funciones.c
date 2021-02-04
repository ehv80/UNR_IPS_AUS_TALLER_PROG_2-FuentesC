// Archivo: arreglos-y-funciones.c

#include <stdio.h>

// #include <stdlib.h>	 Para la función: void free( void * );


#define SIZE 5		// Es una definición de una constante simbólica
			// En adelante, cualquier aparición de SIZE será
			// reemplazada por el texto de reemplazo
			// Tamaño del arreglo
#define TRUE  0
#define FALSE 1
			
// prototipo de la función maximo
int * maximo ( int * );

// prototipo de la función minimo
int * minimo ( int * );

// prototipo de la función inserta
void inserta( int * );

// prototipo de la función existe
int existe( int , int * );

// prototipo de la función muestra
void muestra( int * );

// prototipo de la función busca
int * busca( int , int * );

// prototipo de la función elimina
void elimina( int , int * );

// prototipo de la función cuantos
int cuantos( int * );

/* Función: maximo
 * Destinada a retornar el máximo elemento del arreglo
 * Retorna: 	un puntero a entero
 * Argumentos:	un puntero a entero a partir del cuál
 * 		comenzará a buscar el máximo.
 */
int * maximo( int * conjunto )
{
	if( conjunto != NULL )
	{
		int indice , * max = &( conjunto[0] ) ; 	// indiceMax = 0
		for( indice = 0 ; indice < SIZE ; indice++ )
		{
			if( conjunto[ indice ] > (*max) )
			{
				max = &( conjunto[ indice ] );
				//indiceMax = indice;
			}
		}
		return max;
	}
	return NULL;
}

/* Función: minimo
 * Destinada a retornar el mínimo elemento del arreglo
 * Retorna:     un puntero a entero
 * Argumentos:  un puntero a entero a partir del cuál
 *               comenzará a buscar el mínimo.
 */
int * minimo( int * conjunto )
{
	        if( conjunto != NULL )
		{
			int indice , * min = &( conjunto[0] ) ;
			for( indice = 0 ; indice < SIZE ; indice++ )
			{
				if( conjunto[ indice ] < (*min) )
				{
					min = &( conjunto[ indice ] );
					//indiceMax = indice;
				}
			}
			return min;
		}
		return NULL;
}

/* Función: existe
 * Destinada a revisar si el entero que se le pasa como
 * argumento ya existe en el arreglo.
 * Argumentos:	un entero el que se quiere verificar si 
 * 		existe.
 * 		un puntero a entero a partir del cuál
 * 		comenzará la búsqueda.
 * Retorna:	TRUE, es decir, 0 si ya existe el número
 * 		FALSE, es decir, 1 si no está en el arreglo
 */
int existe( int num , int * conjunto )
{
	int resultado = FALSE;
	if( conjunto != NULL )
	{
		int indice;
		for( indice = 0 ; indice < SIZE ; indice++ )
		{
			if( num == conjunto[ indice ] )
			{
				resultado = TRUE;
			}
		}
		return resultado;
	}
	return resultado;
}

/* Función: inserta
 * Destinada a insertar elementos en el arreglo de manera
 * interactiva con el usuario, de manera que no permita
 * repetir elementos.
 * Retorna: void (nada).
 * Argumentos: un puntero entero que apunta al arreglo de
 * 		enteros.
 */
void inserta( int * conjunto )
{
	if( conjunto != NULL )
	{	
		int indice, tmp;
		for( indice = 0 ; indice < SIZE ; indice++ )
		{
		    volviendoAintroducir:
			printf("Introduzca un entero para el elemento %d º : " , indice + 1 );
			scanf( "%d" , &tmp );
			printf("Verificando si el entero ya existe en el arreglo, espere por favor !!!\n");
			if( existe( tmp , conjunto ) == FALSE )
			{
				conjunto[ indice ] = tmp;
			}
			else if( existe( tmp , conjunto ) == TRUE )
			{
				printf("El número que usted quiere ingresar ya existe en el arreglo!!!\n");
				printf("POR FAVOR INTRODUZCA OTRO NÚMERO DISTINTO!!!\n");
				goto volviendoAintroducir;
			}
		}
	}
}

/* Función: muestra
 * Destinada a mostrar en pantalla el contenido del arreglo.
 * Retorna: void (nada)
 * Argumentos:	un puntero a entero a partir del cuál comienza
 * 		mostrar el arreglo.
 */
void muestra( int * conjunto )
{
	if( conjunto != NULL )
	{
		int indice;
		printf("\n");
		for( indice = 0 ; indice < SIZE ; indice++ )
		{
			printf("conjunto[ %d ] = %d ", indice , conjunto[indice] );
			printf("  ubicado en: %p \n" , &( conjunto[indice] ) );
		}
		printf("\n");
	}
}


/* Función: busca
 * Destinada a retornar el puntero a entero donde se ubica
 * el elemento que se está buscando.
 * Retorna: un puntero a entero que es el que contiene el
 * 		número que se está buscando
 * 	    NULL si el elemento no está en el arreglo
 * Argumentos:	un entero	que se está buscando
 * 		un puntero a entero a partir del cuál
 * 			comienza la búsqueda
 */
int * busca( int numero , int * conjunto )
{
	if( conjunto != NULL )
	{
		int indice;
		for( indice = 0 ; indice < SIZE ; indice++ )
		{
			if( numero == conjunto[ indice ] )
			{
				return ( &( conjunto[ indice ] ) );
			}
		}
	}
	return NULL;
}

/* Función: elimina
 * Destinada a borrar el entero pasado como argumento, si es que
 * está dentro del arreglo su valor es reemplazado por CERO.
 * Retorna: void (nada)
 * Argumentos:	un entero	el que se quiere eliminar.
 * 		un puntero a entero	A partir del cuál
 * 					comienza a buscar.
 */
void elimina( int numero , int * conjunto )
{
	if( conjunto != NULL )
	{
		if( existe( numero , conjunto ) == TRUE )
		{
			int indice;
			for( indice = 0 ; indice < SIZE ; indice++ )
			{
				if( numero == conjunto[ indice ] )
				{
					conjunto[ indice ] = 0;
				}
			}
		}
		else
		{
			printf("El elemento que usted quiere PONER EN CERO no se encuentra en el arreglo!!!\n");
		}
	}
}

/* Función: cuantos
 * Destinada a retornar la cantidad de elementos que posee el arreglo.
 * Retorna: un entero
 * Argumentos: un puntero a int a partir del cuál empieza a buscar.
 */
int cuantos( int * conjunto )
{
	int cantidad = 0;
	if( conjunto != NULL )
	{
		int indice;
		for( indice = 0 ; indice < SIZE ; indice++ )
		{
			cantidad++;
		}
		return cantidad;
	}
	return cantidad;
}

// comienza el código ejecutable principal

int main()
{
	int arreglo[ SIZE ];
	inserta( arreglo );
	int * mayor = maximo( arreglo );
	int * menor = minimo( arreglo );
	printf("El elemento mayor es: %d \n" , *mayor );
	printf("El elemento menor es: %d \n" , *menor );
	int * buscadoA = busca( 3 , arreglo );
	printf("Buscando elemento 3 en el arreglo: \n" );
	if( buscadoA != NULL )
	{
		printf("El elemento %d  ha sido encontrado en: %p \n", *buscadoA , buscadoA );
	}
	else
	{
		printf("El elemento 3 no ha sido encontrado en el arreglo!!!\n");
	}
	muestra( arreglo );
	elimina( 2 , arreglo );
	muestra( arreglo );
	elimina( 1 , arreglo);
	int * mayorDos = maximo( arreglo );
	int * menorDos = minimo( arreglo );
	printf("El elemento mayor es: %d \n" , *mayorDos  );
	printf("El elemento menor es: %d \n" , *menorDos  );
	muestra( arreglo );
	int cantidad = cuantos( arreglo );
	printf("La cantidad de elementos del arreglo es: %d \n" , cantidad );
	return 0;	// salida exitosa del programa
}
// Fin del archivo: arreglos-y-funciones.c
