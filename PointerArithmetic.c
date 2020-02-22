#include <stdio.h>

int main() {

	char direction[50];

	scanf(" %s", direction);
	printf("Original direction: %s\n", direction);

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

	printf("New direction: %s", direction);	

	return 0;
}