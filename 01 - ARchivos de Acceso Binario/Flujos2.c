#include <stdio.h>
#include <string.h>

FILE *escritura;

int main()
{
	int arreglo[5] = { 51, 52, 53, 54, 55};
	int i; 
	
	escritura = fopen("datos.dat", "w");
	if( escritura == NULL) {
		printf("El archivo no se pudo crear");
		return 1;
	}	
	
	for(i = 0; i <= 5 ; i++) {
		fwrite(&arreglo[i], sizeof(int) , 1, escritura);
	}
		
	fclose(escritura);
	
	return 0;	
}