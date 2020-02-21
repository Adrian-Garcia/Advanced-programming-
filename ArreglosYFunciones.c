//
// Autor: Adrian Garcia Lopez
// Matrícula: A01351166
// Fecha: 20/02/2020
// 
// Utilizar arreglos y funciones
#include <stdio.h>

// Realiza la suma de dos matrices de 2x2
void sumOfMatrix(int mat1[2][2], int mat2[2][2]) {
	
	// Matriz auxiliar
	int sumMat[2][2];

	// Realiza operacion
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			sumMat[i][j] = mat1[i][j] + mat2[i][j];
		}
	}	

	// Desplegamos matriz resultante
	printf("\n");
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			printf("%d\t", sumMat[i][j]);
		}
		printf("\n");
	}
}

// Realiza la resta de dos matrices de 2x2
void restOfMatrix(int mat1[2][2], int mat2[2][2]) {
	
	// Matriz auxiliar
	int resMat[2][2];

	// Realiza operacion
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			resMat[i][j] = mat1[i][j] - mat2[i][j];
		}
	}

	// Desplegamos matriz resultante
	printf("\n");
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			printf("%d\t", resMat[i][j]);
		}
		printf("\n");
	}
}

// Realiza la multiplicacione de dos matrices de 2x2
void multiplicationOfMatrix(int mat1[2][2], int mat2[2][2]) {

	// Matriz auxiliar
	int multMat[2][2];

	// Realiza operacion
	for (int i=0; i<2; i++) { 
		
		for (int j=0; j<2; j++) { 
			
			multMat[i][j] = 0; 
			
			for (int k=0; k<2; k++) { 
				multMat[i][j] += mat1[i][k]*mat2[k][j]; 
			} 
		} 
	}

	// Desplegamos matriz resultante
	printf("\n");
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			printf("%d\t", multMat[i][j]);
		}
		printf("\n");
	}
}

int main() {

	// Matrices 
	int mat1[2][2];
	int mat2[2][2];

	// Pedimos matriz 1
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			scanf(" %d", &mat1[i][j]);
		}
	}

	// Pedimos matriz 2
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			scanf(" %d", &mat2[i][j]);
		}
	}

	// Realizamos operaciones de matrices
	sumOfMatrix(mat1, mat2);
	restOfMatrix(mat1, mat2);
	multiplicationOfMatrix(mat1, mat2);

	// Termina el programa
	return 0;
}