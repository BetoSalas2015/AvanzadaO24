#include <stdio.h>

FILE *archivo;

int main()
{
	char cadena[80];
	archivo = fopen("texto.txt", "r");
	if(archivo == NULL)
	{
		printf("El archivo no existe\n");
		return 1;
	}
	
	while( !feof(archivo) ) 
	{
		fgets(cadena, 80, archivo);
		printf("%s\n", cadena);
	}
	

	
	fclose(archivo);
	return 0;	
}