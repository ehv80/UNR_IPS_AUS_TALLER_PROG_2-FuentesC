// Archivo: factorialbucle.c

// prototipo de la fucnción factorialbucle
int factorialbucle( unsigned int );

// Implementación de la función factorial utilizando un bucle de repetición "while"
// ("MIENTRAS") en Lenguaje C
int factorialbucle( unsigned int n )
{
	int resultado = 1; 	// declara una variable local, visible y utilizable solo dentro de esta
				// función
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

// Comienza el código ejecutable
int main()
{
	int a = 0, factbucle = 1;
	int opcion = 0;
	while( opcion == 0 )    	// Bucle de repetición: MIENTRAS( opcion es igual a 0 )
	{                               	// hacer
		printf( "Introduzca un valor entero positivo para a: " );
		scanf( "%d" , &a );      // Lee desde teclado un decimal (%d) y lo guarda en a
		if( a >= 0 ){
			factbucle = factorialbucle( a );
		}
		else{
			printf("\neeeeeeeeeeeeeERRORrrrrrrrrrrrrr!\n");
			return 1;       // salida abrupta del programa por condición errónea
		}
		printf( "El factorial de a vale: a! = %d \n" , factbucle );
		printf( "\nDesea ingresar otro valor para a? \n" );
		printf( "       Ingrese 0 (CERO) para dar un nuevo valor! \n" );
		printf( "       Ingrese un valor distinto de cero para finalizar! \n");
		scanf( "%d" , &opcion );
	}
	return 0;       // salida exitosa del programa todo ha salido bién
}
// Fin del archivo: factorialbucle.c
