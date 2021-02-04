// Archivo: errores-printf-corregido.c
#include <stdio.h>
int main(){
	int i = 10;
	double d = 2.5;
	printf( "\n d vale %f \n" , d ); 	// error de correspondencia de tipos
	printf( "\n d está en: %p \n", &d );	// error de correspondencia de tipos, pues debe ir &d, no d
	return 0;	// salida satisfactoria del programa
}
// Fin del archivo: errores-printf-corregido.c
