//
// Autor: Adrian Garcia Lopez
// Matrícula: A01351166
// Fecha: 24/02/2020
// 
// Generar numeros aleatorios sin usar rand()
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>

unsigned int lfsr = 0xACE1u;
unsigned int bit,t=0;
 
int rand(unsigned int startNumber,unsigned int endNumber) {
    
    if(startNumber == endNumber) return startNumber;
    int *p = new int;
    t = t^(int)p;
    bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
    lfsr = ((bit<<15) | (lfsr>>1) | t)%endNumber;
    while(lfsr<startNumber){
        lfsr = lfsr + endNumber - startNumber;
    }
    return lfsr;
}

int main(void) {

	printf("Random number generator\n\n");

	for (int i=0; i<5; i++) {
		printf("Your number: %d\n", randomNumber(0, 3));
	}

	return 0;
}