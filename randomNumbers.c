//
// Autor: Adrian Garcia Lopez
// Matrícula: A01351166
// Fecha: 24/02/2020
// 
// Generate random numbers wothout using rand()
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Use a random pointer
unsigned int var;
unsigned int seed = 12123723;

// Get a random number from 0 to 99
// This function uses bit manipulation
unsigned int randomNumber(unsigned int seed) {

	// Get random value
  var = ((seed * (int)pow(2,1)) ^ (seed * (int)(pow(2,2))) ^ (seed * (int)(pow(2,3)) ^ (seed * (int)(pow(2,4)))));

  // Get a value different from 0 if needed
	seed = ((seed >> 1) > 0) ?
		(seed >> 1) : (var << 1);

	// Reduce value if bigger than 99 
	if (seed > 99) {
		return seed % 100;
	}
}

// Main function
int main(void) {

	printf("Random number generator\n\n");

	// Get five random numbers
	for (int i=0; i<10; i++) {

		sleep(1);
		time_t now = time(NULL);
		seed = now*9123;
		printf("Your number: %d\n", randomNumber(seed));
	}

	// End program
	return 0;
}