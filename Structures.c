//
// Autor: Adrian Garcia Lopez
// Matrícula: A01351166
// Fecha: 20/02/2020
// 
// Usar la structs en c
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <ctype.h>

// Struct de un agente
struct Agent {
	char name[30];
	char lastName[30];
	unsigned int age;
	char gender[30];
	char idMission[30];
} myAgent;

// Valida que el id de la mission sea valido
bool validateIdMission(char idAgent[30]) {
	
	int i=0;

	for (i=0; i<3; i++)
		if (!isdigit(idAgent[i]))
			return false;

	for (; i<6; i++)
		if (!isalpha(idAgent[i]))
			return false;

	return true;
}

int main() {

	bool flag = false;

	scanf(" %s", myAgent.name);
	scanf(" %s", myAgent.lastName);
	scanf(" %d", &myAgent.age);
	scanf(" %s", myAgent.gender);

	while (!flag) {
		scanf(" %s", myAgent.idMission);
		flag = validateIdMission(myAgent.idMission);
	}

	printf("\n-------------------------\n");
	printf("CONFIDENTIAL\n");
	printf("Name: %s\n", myAgent.name);
	printf("Last name: %s\n", myAgent.lastName);
	printf("Age: %d\n", myAgent.age);
	printf("Gender: %s\n", myAgent.gender);
	printf("idMission: %s\n", myAgent.idMission);

	return 0;
}