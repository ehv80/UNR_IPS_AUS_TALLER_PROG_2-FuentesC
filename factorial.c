// Archivo: factorial.c

// prototipo de la fucnción factorial
int factorial( unsigned int );

// Implementación de la función factorial en Lenguaje C
int factorial( unsigned int n )
{	
	if( n == 0 ){
		return 1;
	}
	else	if( n > 0 ){
	 		return ( n * factorial( n - 1 ) );
		}
		else	if( n < 0 ){
				printf("ERROR!");
				return 0;
			}
}

// Comienza el código ejecutable
int main()
{
	int a=0, fact=1;	
	int opcion = 0;
	while( opcion == 0 )	// Bucle de repetición: MIENTRAS( opcion es igual a 0 ) 
	{				// hacer
		printf( "Introduzca un valor entero positivo para a: " );
		scanf("%d" , &a );	// Lee desde teclado un decimal (%d) y lo guarda en a
		if( a >= 0 ){
			fact = factorial( a );
		}
		else{
			printf("\neeeeeeeeeeeeeERRORrrrrrrrrrrrrr!\n");
			return 1;	// salida abrupta del programa por condición errónea
		}
		printf( "El factorial de a vale: a! = %d \n" , fact );
		printf( "Desea ingresar otro valor para a? \n" );
		printf( "       Ingrese 0 para dar un nuevo valor! \n" );
		printf( "       Ingrese un valor distinto de cero para finalizar! \n");
		scanf( "%d" , &opcion );
	}
	return 0;	// salida exitosa del programa todo ha salido bién
}
// Fin del archivo: factorial.c
