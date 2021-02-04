// Archivo: macros-predefinidas.c
#include <stdio.h>

int main()
{
	printf("\n_____________________________________________________\n");	
	printf("Programa: %s \n", __FILE__ );
	printf("compilado el: %s a las %s \n", __DATE__ , __TIME__ );
	printf("Esto está en la línea Nº: %d \n", __LINE__ );
	printf("y esto está en la línea Nº: %d \n", __LINE__ );
	printf("La función es: %s \n", __FUNCTION__ );
	printf("_____________________________________________________\n");	
	return 0;	// salida exitosa del programa
}
// Archivo: macros-predefinidas.c
