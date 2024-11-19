#include <stdio.h>
#include <stdbool.h>

int main () 

{
	int myAge = 23;
	int votingAge = 18;

	//if...else
	if (myAge >= votingAge)
		{
			printf("You can vote");
		} else {
			printf("You are not old enough to vote");
			}

	printf("\n\n");

	//Short Hand if...else
	// int myAge = 15     declare variable before using(in this case it was already initialized)
	(myAge>=votingAge) ? printf("You can vote") : printf("You are not old enough to vote");	

	printf("\n\n");

	//if...else if
	int time = 22;
	
	if (time<10) 
		{
			printf("Good morning!!");
		} else if (time<30) {
			printf("Good Evening!!");
			} // Outputs Good Evening!!

	printf("\n\n");

	int myNum = 4;

	if (myNum%2==0) 
	{
		printf("El numero %d es par", myNum);
	} else { printf("El numero %d no es par", myNum);
		}
}
