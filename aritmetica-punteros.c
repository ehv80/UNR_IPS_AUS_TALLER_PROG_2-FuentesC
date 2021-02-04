// Archivo: aritmetica-punteros.c
#include <stdio.h>
int main()
{
	/* Para asegurarnos de que se ocupen espacios contiguos en memoria
	* tenemos que definir los arreglos. Se trata de una estructura de
	* datos b�sica que est� soportada nativamente por el Lenguaje de 
	* Programaci�n C. Su objetivo es el almacenamiento contiguo de
	* datos de un mismo tipo en memoria. Se accede a cada elemento del
	* arreglo mediante un �ndice. Los �ndices de los arreglos
	* en C cumplen la siguiente relaci�n: 
	* 	0 <= indice <= (tama�o del arreglo - 1)
	* Para definir un arreglo se realiza de la siguiente manera:
	* 	TIPO-de-DATO nombre-del-arreglo[ tama�o ]
	* opcionalmente se puede definir e inicializar simult�neamente los elementos 
	* del arreglo de la siguiente manera:
	* TIPO-de-DATO nombre-del-arreglo[] = { valor_0 , valor_1, ... ,valor_tama�o-1 }
	*/

	int arregloenteros[] = {1 , 2 , 3 , 4};
	
	double arreglodoubles[] = { 11.11 , 22.22 ,  33.33 , 44.44};
	
	int * parregloenteros = &arregloenteros[0];
	double * parreglodoubles = &arreglodoubles[0];
	
	printf("El entero arregloenteros[0] = %d " , *parregloenteros );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parregloenteros );
	printf("El espacio que ocupa en memoria el entero arregloenteros[0] es: %d bytes\n" , sizeof( int ) );
	printf("\nEl double arreglodoubles[0] = %f " , *parreglodoubles );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parreglodoubles );
	printf("El espacio que ocupa en memoria el double arreglodoubles[0] es: %d bytes\n", sizeof( double ) ); 
	
	/* En cada printf vamos a incrementar los punteros, sum�ndole uno en
	* cada invocaci�n siguiente y usando el operador de indirecci�n (*)
	* para mostrar los valores que hay en esas direcciones de memoria.
	*/

	parregloenteros++ ;
	
	parreglodoubles++;
	
	printf("\n arregloenteros[1]= %d ", *parregloenteros );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parregloenteros );
	printf("\n arreglodoubles[1] = %f ", *parreglodoubles );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parreglodoubles );

	parregloenteros++ ;
	
	parreglodoubles++;
	
	printf("\n arregloenteros[2]= %d ", *parregloenteros );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parregloenteros );
	printf("\n arreglodoubles[2] = %f ", *parreglodoubles );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parreglodoubles );

	parregloenteros++ ;
	
	parreglodoubles++;
	
	printf("\n arregloenteros[3]= %d ", *parregloenteros );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parregloenteros );
	printf("\n arreglodoubles[3] = %f ", *parreglodoubles );
	printf("y se encuentra en la direcci�n de memoria: %p \n", parreglodoubles );

	/* Ahora veremos que la equivalencia entre direcciones de memoria es cierta:
	 * parregloenteros + 1 <==> (unsigned)parregloenteros + 1 * sizeof( int )
	 * parreglodoubles + 1 <==> (unsigned)parreglodoubles + 1 * sizeof( double )
	 */
	
	parregloenteros = &arregloenteros[0];
	
	parreglodoubles = &arreglodoubles[0];

	printf("arregloenteros[0] = %d " , *parregloenteros );
	printf("en direcci�n de memoria: %p \n" , parregloenteros ); 
	printf("arreglodoubles[0] = %f " , *parreglodoubles );
	printf("en direcci�n de memoria: %p \n" , parreglodoubles  ); 
	
	parregloenteros = (unsigned)parregloenteros + 1 * sizeof( int ) ;
	parreglodoubles = (unsigned)parreglodoubles + 1 * sizeof( double ) ;
	
	printf("arregloenteros[1] = %d " , *parregloenteros );
	printf("en direcci�n de memoria: %p \n" , parregloenteros ); 
	printf("arreglodoubles[1] = %f " , *parreglodoubles );
	printf("en direcci�n de memoria: %p \n" , parreglodoubles ); 
	
	parregloenteros = (unsigned)parregloenteros + 1 * sizeof( int ) ;
	parreglodoubles = (unsigned)parreglodoubles + 1 * sizeof( double ) ;
	
	printf("arregloenteros[2] = %d " , *parregloenteros );
	printf("en direcci�n de memoria: %p \n" , parregloenteros ); 
	printf("arreglodoubles[2] = %f " , *parreglodoubles );
	printf("en direcci�n de memoria: %p \n" , parreglodoubles ); 

	parregloenteros = (unsigned)parregloenteros + 1 * sizeof( int ) ;
	parreglodoubles = (unsigned)parreglodoubles + 1 * sizeof( double ) ;
	
	printf("arregloenteros[3] = %d " , *parregloenteros );
	printf("en direcci�n de memoria: %p \n" , parregloenteros ); 
	printf("arreglodoubles[3] = %f " , *parreglodoubles );
	printf("en direcci�n de memoria: %p \n" , parreglodoubles );
	
	return 0;	// salida exitosa del programa, todo ha salido bien
}
// Fin del archivo: aritmetica-punteros.c
