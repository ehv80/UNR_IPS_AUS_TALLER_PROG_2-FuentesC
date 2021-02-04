// Archivo: fork.c
#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("Vamos... \n");
	if( fork() != 0 )
		printf("PADRE!!!\n");
	else
		printf("HIJO!!!\n");
	printf("Salimos...\n");
	return 0;
}
// Fin del archivo: fork.c
