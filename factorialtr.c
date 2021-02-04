// Archivo: factorialtr.c

// prototipo de la fucnci�n factorialtr
int factorialtr( unsigned int , unsigned int );

// Implementaci�n de la funci�n factorial en Lenguaje C
int factorialtr( unsigned int n , unsigned int resultado )
{
	// resultado=1;	para que sea como el factorial
	if( n == 0 ){
		return resultado;
	}
	else	if( n > 0 ){
	 		return factorialtr( (n - 1) , (n * resultado) ) ;
		}
		else	if( n < 0 ){
				printf("ERROR!");
				return 0;
			}
}

// Comienza el c�digo ejecutable
int main()
{
	int a=0, facttr=1;	
	int opcion = 0;
	while( opcion == 0 )	// Bucle de repetici�n: MIENTRAS( opcion es igual a 0 ) 
	{				// hacer
		printf( "Introduzca un valor entero positivo para a: " );
		scanf("%d" , &a );	// Lee desde teclado un decimal (%d) y lo guarda en a
		if( a >= 0 ){
			facttr = factorialtr( a , 1 );
		}
		else{
			printf("\neeeeeeeeeeeeeERRORrrrrrrrrrrrrr!\n");
			return 1;	// salida abrupta del programa por condici�n err�nea
		}
		printf( "El factorial de a vale: a! = %d \n" , facttr );
		printf( "Desea ingresar otro valor para a? \n" );
		printf( "       Ingrese 0 para dar un nuevo valor! \n" );
		printf( "       Ingrese un valor distinto de cero para finalizar! \n");
		scanf( "%d" , &opcion );
	}
	return 0;	// salida exitosa del programa todo ha salido bi�n
}
// Fin del archivo: factorialtr.c
