/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myfirstprogram.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalarra <dgalarra@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:47:51 by dgalarra          #+#    #+#             */
/*   Updated: 2024/11/19 17:21:00 by dgalarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
// Libraries
// stdio.h input-output (write, fprint, etc)
// stdbool.h (Boolean)

	int main()
{
    //this is a comment
    printf("Hello World!");
    printf("\n");
    /*This is also a comment*/
    printf("Have a good day!!");
	    
    printf("\n");

    float myNum = 777.55;
    // or
    int otherNum;
    otherNum = 666;

	// printf(myNum); thi does not work
    printf ("%f", myNum); //%d or %i format specifer for integers
 					 	  //%c for char, %f for floats, %lf for doubles, %s for strings
    printf("\n Me mide:- %d cm \n \n ",1 );
 
	// rewrite variable value
	myNum = 888;

	printf ("My new num is %f \n", myNum);

	// sum
	int x = 6;
	int y = 9;
	int sum = x + y;
	printf ("\n Sum of  %d + %d = %d ", x, y, sum);

	//Multiple Variables
	int a = 5, b = 6, c = 50;
	printf("\n new sum is: %d", a + b + c);	

	//Calculate area of triangle
	int length = 5;
	int width = 13;
	int area = width * length;

	printf(" \n Length is: %d" , length);
	printf("\n Width is: %d" , width);
	printf("\n Area of the rectangle is: %d" , area);

	//Double and float
	float myFloatNum = 3.5;

	printf("\n\n%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
	printf("%.1f\n", myFloatNum); // Only show 1 digit
	printf("%.2f\n", myFloatNum); // Only show 2 digits
	printf("%.4f", myFloatNum);   // Only show 4 digits

	//Character Data types (char)
	char myGrade = 'A';
	printf("\n \n Char types \n my grade is  %c" , myGrade);

	//Get the Memory Size
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("\n\n %lu" , sizeof(myInt));
	printf("\n %lu" , sizeof(myFloat));
	printf("\n %lu" , sizeof(myDouble));
	printf("\n %lu" , sizeof(myChar));

	//Real Life Example
	printf("\n\n");

	// Create variables of different data types
	int items = 50;
	float cost_per_item = 9.99;
	float total_cost = items * cost_per_item;
	char currency = '$';

	// Print variables
	printf("Number of items: %d\n", items);
	printf("Cost per item: %.2f %c\n", cost_per_item, currency);
	printf("Total cost = %.2f %c\n", total_cost, currency);

	//Manual Type Conversion
	float div = (float) 5/2;
	
	printf("\n\n");
	printf("Division %.1f", div); // 2.5

	//Real Life Example
	printf("\n\n");
	
	// Set the maximum possible score in the game to 500
	int maxScore = 500;

	// The actual score of the user
	int userScore = 423;

	/*Calculate the percantage of the user's score in relation to the maximum available score.
	Convert userScore to float to make sure that the division is accurate */
	float percentage = (float) userScore / maxScore * 100.0;

	// Print the percentage
	printf("User's percentage is %.2f", percentage);


	//Constants
	const int MYNUM = 15; //Constante sacada de mis huevos

	//Operators (+ - * / % ++ --) 
	int num = 100 + 15;
	int sum1 = num + 15;
	int sum2 = sum1;
	sum2 += 5;

	//Assignment Operators
	// Ope   Example   Same as
	// =     x = 5	x = 5	
	// +=  	x += 3	x = x + 3	
	// -=	x -= 3	x = x - 3	
	// *=	x *= 3	x = x * 3	
	// /=	x /= 3	x = x / 3	
	// %=	x %= 3	x = x % 3	
	// &=	x &= 3	x = x & 3	
	// |=	x |= 3	x = x | 3	
	// ^=	x ^= 3	x = x ^ 3	
	// >>=	x >>= 3	x = x >> 3	
	// <<=	x <<= 3	x = x << 3

	//Comparison Operators

	// ==	Equal to		x == y	Returns 1 if the values are equal	
	// !=	Not equal		x != y	Returns 1 if the values are not equal	
	// >	Greater than	x > y	Returns 1 if the first value is greater than the second valu
	// <	Less than		x < y	Returns 1 if the first value is less than the second value	
	// >=	mayor o igual	x >= y	Returns 1 if the first value is mayor o igual second value	
	// <=	menor o igual 	x <= y	Returns 1 if the first value is menor o igual the second value

	//Logical Operators
	
	// && 	AND	x < 5 &&  x < 10	Returns 1 if both statements are true	
	// || 	OR	x < 5 || x < 4	Returns 1 if one of the statements is true	
	// !	NOT	!(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1


	//Boolean Variables 
	
	bool isProgrammingFun = true;
	bool isSkyGreen = false;

	printf("\n\n");
	printf("Is Programming fun: %d", isProgrammingFun);   // Returns 1 (true)
	printf("\n Is Sky green: %d", isSkyGreen);        // Returns 0 (false)










































		

	    return 0;
    }
