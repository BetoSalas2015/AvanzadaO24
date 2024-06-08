#include <stdio.h>

FILE *lectura, *escritura;

int main()
{
	char cadena[80];
	
	lectura = fopen("Flujos.c", "r");
	if(lectura == NULL)
	{
		printf("El archivo no existe\n");
		return 1;
	}
	
	escritura = fopen("Copia de Flujos.c", "w");
	if(escritura == NULL)
	{
		printf("El archivo no se puede crear\n");
		return 1;
	}
	
	while( !feof(lectura) ) 
	{
		fgets(cadena, 80, lectura);
		printf("%s", cadena);
		fprintf(escritura, "%s", cadena);
	}
	
	fclose(lectura);	
	fclose(escritura);
	return 0;	
}