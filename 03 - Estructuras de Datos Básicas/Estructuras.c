#include <stdio.h>

struct nombrePersona
{
	char nombre[15];
	char apellido[15];
};

struct persona		// declaración de la estructura
{
	struct nombrePersona Nombre;
	int edad;
	float altura;
	char sexo;
};

int main()
{
	int pisos;
	struct persona miPersona;
	char nombre[20];
	
	printf("Dame el nombre: ");
	gets(miPersona.Nombre.nombre);
	printf("Dame el apellido: ");
	gets(miPersona.Nombre.apellido);
	printf("Dame la edad: ");
	scanf("%d", &miPersona.edad);
	printf("Dame la estatura: ");
	scanf("%f", &miPersona.altura);
	fflush(stdin);
	printf("Dame el sexo: ");
	scanf("%c", &miPersona.sexo);
	
	printf(" Nombre: %s %s,\n Edad: %d,\n Estatura: %4.2f,\n Sexo: %c\n", miPersona.Nombre.nombre,miPersona.Nombre.apellido, miPersona.edad, miPersona.altura, miPersona.sexo);	
}