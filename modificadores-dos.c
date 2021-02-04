// Archivo: modificadores.c
#include <stdio.h>
int main(){
	const int i=10;
	printf("const int i=10;\n");
	int j = 5;
	printf("int j = 5;\n");
	i = j;	// ERROR
	printf("i = j debería dar error\n");
	return 0;	// salida exitosa del programa
}
// Fin del Archivo: modificadores.c
