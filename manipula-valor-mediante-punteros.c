// Archivo: manipula-valor-mediante-punteros.c

#include <stdio.h>
int main()
{
	int i = 13, j = 12;
	int * pi = &i , * pj = &j ;
	printf("i = %d  ,  j = %d \n" , i , j );
	(*pi)++;	// al valor apuntado por pi sumarle uno
	(*pj)++;	// al valor apuntado por pj sumarle uno
	printf("Ahora i = %d  , y j = %d \n" , i , j);
	return 0;
}
// Fin del archivo: manipula-valor-mediante-punteros.c
