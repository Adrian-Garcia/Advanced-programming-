//
// Autor: Adrian Garcia Lopez
// Matrícula: A01351166
// Fecha: 21/02/2020
// 
// Usar aritmetica de apuntadores
#include <stdio.h>

// Programa principal
int main() {

	// String que se utilizara
	char direction[50];

	// Pedimos direccion
	scanf(" %s", direction);
	printf("Original direction: %s\n", direction);

	// Modificamos el string
	for (int i=0; i<50; i++) {
		
		if (direction[i] == 'a') 
			direction[i] += '4' - 'a';

		else if (direction[i] == 'e')
			direction[i] += '3' - 'e';

		else if (direction[i] == 'i')
			direction[i] += '1' - 'i';

		else if (direction[i] == 'o')
			direction[i] += '0' - 'o';

		else if (direction[i] == 'u')
			direction[i] += '2' - 'u';
	}

	// Damos resultados de la nueva direccion
	printf("New direction: %s", direction);	

	// Terminamos programa
	return 0;
}