// Este es un comentario de linea (Estilo Lenguaje C++)
#include <stdio.h>

#define PII 3.14159

int main() 			//  Punto de entrada
{
	const float PI = 3.14159;		// Creo la constante PI asignadole la constamte literal 3.15149
	int costo = 60;
	float descuento;
	char caracter = 'A';
	int horas, minutos;
	char cadena[80];
	
	descuento = 0.3;
	descuento = 0.4;
	
	/*printf("Como cararcter = '%c', Como entero = %d\n", caracter, caracter);
	printf("%s\n", "Saludos Programas!!!!!");
	printf("Costo como char = %c\n", costo);
	printf("Costo como int = %d \n", costo);
	printf("Costo como int octal = %o\n", costo);
	printf("Costo como int hexadecimal = %x\n", costo);
	printf("Costo como int sin signo = %u\n", costo * -1);
	printf("descuento como float = %f\n", descuento);
	printf("descuento como float = %e\n", descuento);
	printf("descuento %f%%\n", descuento);
	printf("Costo como int = %10d \n", costo);
	printf("Costo como int = %010d \n", costo);
	printf("Costo como int = %-10d \n", costo);
	printf("Costo como int = %+10d \n", costo);
	printf("Costo como int = % 10d \n", costo);
	printf("descuento como float = %5.2f\n", descuento);*/
	
	
	printf("Dame la hora: ");
	scanf("%d:%d",&horas, &minutos);
	printf("%d:%d\n", horas, minutos);
	
	fflush(stdin);
	
	printf("Dame una cadena ");
	gets(cadena);
	printf("%s\n", cadena);
	
	printf("Dame una cadena ");
	gets(cadena);
	printf("%s\n", cadena);
	
}











