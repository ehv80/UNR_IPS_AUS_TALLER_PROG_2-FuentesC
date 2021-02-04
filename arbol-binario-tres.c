// Archivo: arbol-binario-tres.c
#include <stdio.h>
#include <stdlib.h>	// Para la funci�n malloc. Funciones que
			// permiten asignar y liberar memoria din�mica

/* Declaraci�n de un sin�nimo de "puntero a estructura Nodo"
 * para el arbol binario
 * Variables miembro de la estructura Nodo: 
 * 	entero				elemento del nodo
 * 	puntero a "struct Nodo"		sub-arbol izquierdo
 * 	puntero a "struct Nodo"		sub-arbol derecho
 */
typedef struct Nodo{ int elemento; struct Nodo * izq, * der;} * PNodo ;

// prototipo de la funci�n inserta
PNodo inserta( int , PNodo );

// prototipo de la funci�n recorre
void recorre( PNodo );

// prototipo de la funci�n busca
PNodo busca( int , PNodo );

// prototipo de la funci�n borra
PNodo borra( int , PNodo );

// prototipo de la funci�n menor:
PNodo menor( PNodo );

// prototipo de la funci�n mayor
PNodo mayor( struct Nodo * );

/* Funci�n: recorre
 * Destinada a mostrar en pantalla los elementos del arbol binario
 * en forma ordenada.
 * Retorna: void (nada)
 * Argumentos: puntero a "struct Nodo" a partir del cu�l comenzar�
 * 				       a mostrar sus elementos
 */
void recorre( PNodo nodoElegido )
{
	if( nodoElegido != NULL )
	{
		recorre( nodoElegido->izq );
		printf( "\n %d \n" , nodoElegido -> elemento );
		recorre( nodoElegido->der );
	}
}

/* Funci�n: inserta
 * Destinada a insertar un elemento al arbol a partir de un nodo
 * indicado mendiante un "puntero a "struct Nodo""
 * Retorna: un puntero a "struct Nodo"
 * Argumentos: un entero, 	elemento que quiere insertar
 * 	       un puntero a "struct Nodo" a partir del cu�l
 * 	       buscar� el lugar adecuada para que al insertar
 * 	       el elemento, se mantenga el orden y no haya
 * 	       repetici�n de elementos.
 */ 	       		                 
PNodo inserta( int elemento , PNodo nodoElegido )
{
	if( nodoElegido == NULL ){
		
		nodoElegido = malloc( sizeof( struct Nodo ) );
		
		    /* malloc asigna sizeof( struct Nodo ) bytes y
		     * devuelve un puntero a la memoria asignada.
		     * La memoria no es borrada.
		     */
		nodoElegido -> elemento = elemento;
		nodoElegido -> izq = nodoElegido -> der = NULL;
	}
	else if( elemento < nodoElegido -> elemento ){
		nodoElegido -> izq = inserta( elemento , nodoElegido -> izq );
		// inserta el elemento en el sub-arbol izquierdo
	}
	else if( elemento > nodoElegido -> elemento ){
		nodoElegido -> der = inserta( elemento , nodoElegido -> der );
		// inserta el elemento en el sub-arbol derecho
	}
	return nodoElegido;
}

/* Funci�n: busca
 * Destinada a buscar un elemento en el arbol binario.
 * Retorna: un "puntero a "struct Nodo"" que es el que
 * 		apunta al elemento que ha sido encontrado.
 * 	    NULL si el elemento no ha sido encontrado.
 * Argumentos: un entero	elemento buscado.
 * 	       un "puntero a "struct Nodo"" a partir del
 * 	       cu�l comenzar� a buscar.
 */
PNodo busca( int elementoBuscado , PNodo nodoElegido )
{
	if( nodoElegido != NULL )
	{
		if( elementoBuscado == nodoElegido -> elemento )
		{
			return nodoElegido;
		}
		else if( elementoBuscado < nodoElegido -> elemento )
		{
			return busca( elementoBuscado , nodoElegido -> izq );
		}
		else if( elementoBuscado > nodoElegido -> elemento )
		{
			return busca( elementoBuscado , nodoElegido -> der );
		}
	}
	return NULL;
}

/* Funci�n: borra
 * Destinada a eliminar el elemento pasado como argumento.
 * Primero lo busca a partir del "punteo a "struct Nodo"" y
 * si lo encuentra, borra el Nodo en el que est�, respetando
 * el orden de los elementos del arbol binario luego de que
 * se realiza la extracci�n.
 * Retorna:	un puntero a "struct Nodo"
 * Argumentos:	un entero
 * 		un puntero a "struct Nodo"
 */
PNodo borra( int elementoAborrar , PNodo nodoElegido )
{
	if( nodoElegido != NULL )
	{
		if( elementoAborrar == (nodoElegido -> elemento) )
		{
			if( (nodoElegido -> izq) == NULL && (nodoElegido -> der) == NULL )
			{
				return NULL;
			}
			else if( (nodoElegido -> izq) != NULL && (nodoElegido -> der) == NULL )
			{
				PNodo mayorDELizq = mayor( nodoElegido -> izq );
				int numeroMayorDELizq = (mayorDELizq -> elemento);
				(nodoElegido -> elemento) = numeroMayorDELizq;
				(nodoElegido -> izq) = borra( numeroMayorDELizq , mayorDELizq );
				return nodoElegido;
			}
			else if( (nodoElegido -> izq) == NULL && (nodoElegido -> der) != NULL )
			{
				PNodo menorDELder = menor( nodoElegido -> der );
				int numeroMenorDELder = (menorDELder -> elemento);
				(nodoElegido -> elemento) = numeroMenorDELder;
				(nodoElegido -> der) = borra( numeroMenorDELder , menorDELder ); 
				return nodoElegido;
			}
			else if( (nodoElegido -> izq) != NULL && (nodoElegido -> der) != NULL )
			{
				PNodo menorDELder = menor( nodoElegido -> der );
				int numeroMenorDELder = (menorDELder -> elemento);
				(nodoElegido -> elemento) = numeroMenorDELder;
				(nodoElegido -> der) = borra( numeroMenorDELder , menorDELder );
				return nodoElegido;
			}
		}
		else if( elementoAborrar < (nodoElegido -> elemento) )
		{
			(nodoElegido -> izq) = borra( elementoAborrar , nodoElegido -> izq ); 
			return nodoElegido;
		}
		else if( elementoAborrar > (nodoElegido -> elemento) )
		{
			(nodoElegido -> der) = borra( elementoAborrar , nodoElegido -> der ); 
			return nodoElegido;
		}
	}
	return NULL;
}
			
/* Funci�n: menor
 * Destinada a retornar el menor elemento que hay en el arbol
 * binario.
 * Retorna:	puntero a "struct Nodo"
 * Argumentos:	puntero a "struct Nodo"
 */
PNodo menor( PNodo nodoElegido )
{
	if( nodoElegido != NULL )
	{
		if( (nodoElegido -> izq) == NULL )
		{
			return nodoElegido;
		}
		else if( nodoElegido -> izq != NULL )
		{
			return menor( nodoElegido -> izq );
		}
	}
	return NULL;
}

/* Funci�n: mayor
 * Destinada a retornar el mayor elemento que hay en el arbol
 * binario.
 * Retorna:	un "puntero a "struct Nodo""
 * Argumentos:	un "puntero a "struct Nodo""
 */
PNodo mayor( PNodo nodoElegido )
{
	if( nodoElegido != NULL )
	{
		if( (nodoElegido -> der) == NULL )
		{
			return nodoElegido;
		}
		else if( (nodoElegido -> der) != NULL )
		{
			return mayor( nodoElegido -> der );
		}
	}
	return NULL;
}

// Comienza el c�digo ejecutable, funci�n principal main
int main()
{
	PNodo arbol = NULL;
	int indice;
	for( indice = 99 ; indice > 0 ; indice -= 2 )
	{
		arbol = inserta( indice , arbol );
	}
	PNodo nodoDelElemento33 = busca( 33 , arbol );
	printf("El entero: %d se encuentra en: %p \n" , nodoDelElemento33->elemento , &(nodoDelElemento33->elemento));
	recorre( arbol );
	for( indice = 99 ; indice > 0 ; indice -= 2 )
	{
		PNodo tmp = busca( indice , arbol );
		printf("elemento = %d   en direcci�n = %p \n" , tmp->elemento , &(tmp->elemento) );
	}
	PNodo minimo = menor( arbol );
	PNodo maximo = mayor( arbol );
	printf("El elemento m�nimo del arbol binario es: %d y est� en: %p \n" , minimo->elemento , &(minimo->elemento) );
	printf("El elemento m�ximo del arbol binario es: %d y est� en: %p \n" , maximo->elemento , &(maximo->elemento) );
	borra( 33 , arbol );
	//recorre( arbol );
	borra( 1 , arbol );
	borra( 99 , arbol );
	borra( 11 , arbol );
	borra( 55 , arbol );
	borra( 77 , arbol );
	recorre( arbol );
	minimo = menor( arbol );
	maximo = mayor( arbol );
	printf("El elemento m�nimo del arbol binario es: %d y est� en: %p \n" , minimo->elemento , &(minimo->elemento) );
	printf("El elemento m�ximo del arbol binario es: %d y est� en: %p \n" , maximo->elemento , &(maximo->elemento) );
	return 0;	// salida exitosa del programa
}
// Fin del archivo: arbol-binario-tres.c
