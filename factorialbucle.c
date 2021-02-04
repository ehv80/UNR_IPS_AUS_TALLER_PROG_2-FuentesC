// Archivo: factorialbucle.c

// prototipo de la fucnci�n factorialbucle
int factorialbucle( unsigned int );

// Implementaci�n de la funci�n factorial utilizando un bucle de repetici�n "while"
// ("MIENTRAS") en Lenguaje C
int factorialbucle( unsigned int n )
{
	int resultado = 1; 	// declara una variable local, visible y utilizable solo dentro de esta
				// funci�n
	while( n > 0 )
	{
		resultado *= n;	// equivale a:  resultado = resultado * n
		n--;		// equivale a:  n = n - 1
	}
	if( n >= 0 ){
		return resultado;
	}
	else	if( n < 0 ){
			printf("\neeeeeeeeeeeeeERROR!rrrrrrrrrrrrr\n");
			return 0;
		}
}

// Comienza el c�digo ejecutable
int main()
{
	int a = 0, factbucle = 1;
	int opcion = 0;
	while( opcion == 0 )    	// Bucle de repetici�n: MIENTRAS( opcion es igual a 0 )
	{                               	// hacer
		printf( "Introduzca un valor entero positivo para a: " );
		scanf( "%d" , &a );      // Lee desde teclado un decimal (%d) y lo guarda en a
		if( a >= 0 ){
			factbucle = factorialbucle( a );
		}
		else{
			printf("\neeeeeeeeeeeeeERRORrrrrrrrrrrrrr!\n");
			return 1;       // salida abrupta del programa por condici�n err�nea
		}
		printf( "El factorial de a vale: a! = %d \n" , factbucle );
		printf( "\nDesea ingresar otro valor para a? \n" );
		printf( "       Ingrese 0 (CERO) para dar un nuevo valor! \n" );
		printf( "       Ingrese un valor distinto de cero para finalizar! \n");
		scanf( "%d" , &opcion );
	}
	return 0;       // salida exitosa del programa todo ha salido bi�n
}
// Fin del archivo: factorialbucle.c
