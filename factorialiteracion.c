//Archivo: factorialiteracion.c

// prototipo de la fucnción factorialiteracion
int factorialiteracion( unsigned int , unsigned int );

// Implementación de la función factorial, como una iteración, en Lenguaje C
int factorialiteracion( unsigned int n , unsigned int resultado )
{
        // resultado=1; para que sea como el factorial
	sigue:	// define una etiqueta que sirve como referencia para usar con "goto"
		// Se dice que usar la sentencia "goto" junto con etiquetas NO ES UNA
		// BUENA TÉCNICA DE PROGRAMACIÓN. Los programas que hizo Bill Gates 
		// están llenos de sentencias goto con etiquetas
	if( n == 0 ){
		return resultado;
	}
	else	if( n > 0 ){
			resultado =  (n * resultado);
			n = (n - 1);
			goto sigue;	// así se le dice: ve hasta la dirección en
					// memoria etiquetada con sigue
		}
		else	if( n < 0 ){
				printf("\neeeeeeeeeeeeeERRORrrrrrrrrrrrrr! \n");
				return 0;
			}
}

// Comienza el código ejecutable, la función "main" es la función principal
int main()
{
	int a=0, factiter=1;
	int opcion = 0;
	while( opcion == 0 )    // Bucle de repetición: MIENTRAS( opcion es igual a 0 )
	{                               // hacer
		printf( "Introduzca un valor entero positivo para a: " );
		scanf("%d" , &a );      // Lee desde teclado un decimal (%d) y lo guarda en a
	 	if( a >= 0 ){
			factiter = factorialiteracion( a , 1 );
	 	}
		else{
			printf("\neeeeeeeeeeeeeERRORrrrrrrrrrrrrr!\n");
			return 1;       // salida abrupta del programa por condición errónea
		}
		printf( "El factorial de a es: a! = %d \n" , factiter );
		printf( "\nDesea ingresar otro valor para a? \n" );
		printf( "       Ingrese 0 para dar un nuevo valor! \n" );
		printf( "       Ingrese un valor distinto de cero para finalizar! \n");
		scanf( "%d" , &opcion );
	}
	return 0;       // salida exitosa del programa todo ha salido bién
}
// Fin del archivo: factorialiteracion.c
