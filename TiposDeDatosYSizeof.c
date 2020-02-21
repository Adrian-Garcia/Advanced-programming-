//
// Autor: Adrian Garcia Lopez
// Matrícula: A01351166
// Fecha: 20/02/2020
// 
// Usar la funcion sizeof()
#include <stdio.h>
#include <float.h>

// Function principal
int main() {

	int integer = 0;
	char character = 0;
	double doubleNumber = 0;

	// Pedimos un numero entero
	printf("\nWrite an integer number: ");
	scanf(" %d", &integer);

	// Pedimos un caracter
	printf("\nWrite a character: ");
	scanf(" %c", &character);

	// Pedimos un numero double
	printf("\nWrite a double number: ");
	scanf(" %lf", &doubleNumber);

	// Desplegamos datos
	printf("\n\nYour integer <%d> storage size is <<%ld>> bytes", integer, sizeof(integer));
	printf("\nYour char <%c> storage size is <<%ld>> bytes. And I can read it as <<%c>> or as <<%d>>", character, sizeof(character), character, character);
	printf("\nYour double <%lf> storage size is <<%ld>> bytes, I can read any number from <<%lf>> to <<%lf>> in this data type.", doubleNumber, sizeof(doubleNumber), -DBL_MAX, DBL_MAX);

	// Terminamos programa
	return 0;
}