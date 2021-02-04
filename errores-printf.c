// Archivo: errores-printf.c
#include <stdio.h>
int main(){
	int i = 10;
	double d = 2.5;
	printf( "\n d vale %d \n" , d ); 	// error de correspondencia de tipos
	printf( "\n d está en: %p \n", d );	// error de correspondencia de tipos, pues debe ir &d, no d
	return 0;	// salida satisfactoria del programa
}
// Fin del archivo: errores-printf.c
