// Archivo: macros-predefinidas.c
#include <stdio.h>

int main()
{
	printf("\n_____________________________________________________\n");	
	printf("Programa: %s \n", __FILE__ );
	printf("compilado el: %s a las %s \n", __DATE__ , __TIME__ );
	printf("Esto est� en la l�nea N�: %d \n", __LINE__ );
	printf("y esto est� en la l�nea N�: %d \n", __LINE__ );
	printf("La funci�n es: %s \n", __FUNCTION__ );
	printf("_____________________________________________________\n");	
	return 0;	// salida exitosa del programa
}
// Archivo: macros-predefinidas.c
