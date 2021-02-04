/*********
 * C permite guardar punteros.
 * Sea el Tipo de dato "T" y una variale "v" de ese 
 * tipo de dato "T"
 * 			T v;
 * 			
 * 	¿Cuál es el Tipo de &v ?
 * 	El tipo de &v es "puntero a TIPO DE DATO T" 
 * 	y se anota así:
 * 			T *
 * 	Sea entonces "pv" un "puntero a "TIPO de DATO T"
 * 	que guarda la dirección de memoria de la variable
 * 	v del "TIPO de DATO T", esto se anota así:
 * 	
 * 		T V;		// variable v de "TIPO de DATO T"
 * 		
 * 		T *pv;	// "puntero a TIPO de DATO T"
 * 		pv = &v;// que almacena la dirección de memoria de la variable v
 *			// que es de "TIPO de DATO T"
 ********/
#include <stdio.h>
int main(){
	int i = 13;
	double d = 3.14;

	int *pi;
	double *pd;

	pi = &i;
	pd = &d;

	printf("Valores de las variables: %8d %8.8f \n", i , d);
	printf("Direcciones de memoria: %p %p \n", &i , &d );
}
