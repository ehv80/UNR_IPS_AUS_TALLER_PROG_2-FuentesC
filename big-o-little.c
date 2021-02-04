// Archivo: big-o-little.c
#include <stdio.h>
int main()
{
	int i = 0x12345678;

	unsigned char * pi = (unsigned char *) &i;

	if( pi[0] == 0x12 && pi[1] == 0x34 && pi[2] == 0x56 && pi[3] == 0x78 )
	{
		printf("Este microprocesador es BIG ENDIAN ! \n");
	}
	else if(  pi[0] == 0x78 && pi[1] == 0x56 && pi[2] == 0x34 && pi[3] == 0x12 )
	     {
		     printf("Este microprocesador es LITTLE ENDIAN ! \n");
	     }
	     else
	     {
		     printf("Este microprocesador es un PDP/11 ! \n");
	     }
	return 0;	// salida exitosa del programa
}
// Fin del archivo: big-o-little.c
