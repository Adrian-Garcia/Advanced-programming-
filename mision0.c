#include <stdio.h>
#include <stdlib.h> 

int numEntradas = 0;

struct Activo {
	
	char nombreActivo[50];
	struct Activo *nextActivo;
};

struct Mision {
	
	char nombreMision[50];
	struct Mision *nextMision;
};

struct Agente {

	char nombre[50];
	char apellido[50];
	int edad;
	int numActivos;
	int numAgentes;
	struct Mision *misiones;
	struct Activo *activosInteligencia;
	struct Agente *nextAgente;
};

// Añade un agente a la lista encadenada
void agregarAgente(struct Agente* head) {

	char name[50];

	// No hay agentes registrados
	if (!numEntradas) {

		head = (struct Agente*)malloc(sizeof(struct Agente)); 
		head->nextAgente = NULL;

		printf("Inserta el nombre del agente: ");
		scanf(" %s", name);
		head->nombre = name;

		printf("Inserta el apellido del agente: ");
		scanf(" %s", lname);
		head->apellido = lname;
		
		printf("Inserta la edad del agente: ");
		scanf(" %d", &age);
		head->age = edad;
	}

	// Hay agentes registrados
	else {

		// Recorremos la lista 
		struct Agente *curr = head;

		while(curr->nextAgente != NULL)
			curr = curr->nextAgente;
		
		struct Agente* newAgente = (struct Agente*)malloc(sizeof(struct Agente));
		curr->nextAgente = newAgente;
	}

	// Actualizamos numero de entradas
	numEntradas++;
}

// Elimina un agente de la lista encadenada
void eliminarAgente(struct Agente* head) {

	numEntradas--;
}

void mostrarAgentes() {

}

int main() {

	char opcion = '1';	
	struct Agente* head = NULL; 

	while (opcion != '0') {

		printf("Ingresa una opcion\n");
		printf("---------------------------------\n");
		printf("Actualmente hay %d entradas\n", numEntradas);
		printf("Opcion 0: Salir\n");
		printf("Opcion 1: Crear una nueva entrada\n");
		printf("Opcion 2: Eliminar una entrada\n");
		printf("Opcion 3: Ver todos los agentes\n");
		printf("Opcion: ");
		
		scanf(" %c", &opcion);

		switch (opcion) {
			
			case '1':
				agregarAgente( &head);
			break;

			case '2':
				eliminarAgente(head);
			break;
			
			case '3':
				mostrarAgentes();
			break;
		}

		printf("\n\n");

	}

	return 0;
}