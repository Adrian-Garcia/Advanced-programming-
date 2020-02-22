//
// Autor: Adrian Garcia Lopez
// Matrícula: A01351166
// Fecha: 21/02/2020
// 
// Funciones con recursividad
#include <stdio.h>

// Obtiene el factorial de un numero dado de forma recursiva
int factorial(int n) {
	
	if (n > 0)
		return n*factorial(n-1);
	
	else
		return 1;
}

// Obtiene el numero de la serie de fibbonacci de forma recursiva
int fibbo(int n) {

	if(!n) 
		return 0;
	
	else if(n == 1)
		return 1;

	else 
		return (fibbo(n-1) + fibbo(n-2));
}

// Programa principal
int main() {

	int factNum;
	int fibboNum;

	// Para obtener factorial
	scanf("%d", &factNum);
	printf("Factorial of %d is %d\n", factNum, factorial(factNum));

	// Para obtener fibbonacci
	scanf("%d", &fibboNum);
	printf("Fibbonacci of %d is ", factNum, factorial(factNum));
	for(int i=0; i<fibboNum; i++)
		printf(" %d ", fibbo(i));

	// Terminamos programa
	return 0;
}