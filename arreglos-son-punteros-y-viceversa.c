// Archivo: arreglos-son-punteros-y-viceversa.c
#include <stdio.h>
int main()
{
	printf("Declaramos un arreglo de 5 enteros: int a[5] .\n");
	int a[5];
	printf("Inicializamos los valores del arreglo a .\n");
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	int indice = 0;
	
/* Introduciremos una nueva sentencia que se utiliza para 
* realizar bucles o iteraciones. Se denomina "for" (en
* español sería "PARA"). Se la utiliza cuando se sabe de 
* antemano la cantidad de veces que se va a repetir una cierta
* operación o sentencia. Se utiliza mucho para la manipulación
* de arreglos. El bucle for tiene la siguiente sintaxis
* que se debe respetar:
* 
* 	TIPO-de-DATO iterador;
*for( inicialización-del-iterador ; comparación-aplicada-al-iterador ; incremento-o-decremento-aplicado-al-iterador )
* 	{
* 		sentencia-en-lenguaje-C-que-se-debe-ejecutar-en-cada-iteración;
* 		puede-ser-más-de-una-sentencia;
* 	}
*
* Es decir, la inicialización del iterador se realiza una sola vez, antes de empezar el bucle de repetición de sentencias. 
* Así para el iterador que parte desde un valor inicial, mientras el iterador siga
* cumpliendo la condición de la comparación, se ejecutan las sentencias, e inmediatamente después 
* se incrementa, o decrementa según corresponda, el valor del iterador. 
* Si el iterador sigue cumpliendo con la condición de comparación, se ejecutan nuevamente las sentencias, sino se termina
* el bucle de repetición.
*/
	for( indice = 0 ; indice < 5 ; indice++ )
	{
		printf("	a[%d] = %d	\n", indice , indice );
	}
	
	printf("Declaramos un \"puntero a arreglo de 5 enteros\": int * pa = &a[0] \n");
	int * pa = &a[0];
	printf("Veamos que se consigue lo mismo al mostrar a[indice] que al mostrar *(pa + indice)  \n");
	for( indice = 0 ; indice < 5 ; indice++ )
	{
      printf("a[%d] = %d es igual que: *(pa + %d ) = %d \n" , indice , a[indice] , indice , *(pa + indice));
	}
	
	printf("Mas asombroso aún es lo siguiente: \n");

	for( indice = 0 ; indice < 5 ; indice++ )
	{
	printf("*(a + %d) = %d  es igual que:  pa[%d] = %d \n" , indice , *(a + indice), indice , pa[indice]);
	}
	
	printf("POR LO TANTO HEMOS VISTO QUE LOS ARREGLOS SON PUNTEROS!!!\n");
	printf("Y            HEMOS VISTO QUE LOS PUNTEROS SON ARREGLOS!!!\n");
	
	return 0;	// salida exitosa del programa, todo ha salido bién
}
// Fin del archivo: arreglos-son-punteros.c
