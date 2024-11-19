#include<stdio.h>
#include<stdbool.h>

int main () 
{
	// Variable con unos numeros
	int numbers = 123456789;

	// Variable paar almacenar los numeros invertidos
	int revNumbers = 0;

	// Reverse and reorder the numbers
	while (numbers) {
		//Get the last number of 'numbers' and add it to 'revNumbers'
		revNumbers = revNumbers * 10 + numbers % 10;
		// Remove the last number of 'numbers'
		numbers /= 10;
	}
	
	// Output the reversed  nunmbers
	printf("%d", revNumbers);

return 0;
}
