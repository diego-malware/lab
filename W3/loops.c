#include <stdio.h>
#include <stdbool.h>

int main () 
{
	// while loop
	int i = 0;

	while (i<5) {
		printf("Linea %d \n", i);
		i++;
	}

	printf("\n");

	// do...while loop (loop runs at least once)
	i = 0;

	do {
		printf("Nueva Linea");
		i++;
	} while (i<0);

	printf("\n");

	// for loop
	int j;

	for (j = 5; j > 0; j--) {
		printf("\nEsta linea se imprimira %d veces", j);
	}

return 0;
}
