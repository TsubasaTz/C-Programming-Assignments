/*
Maggie Nguyen
11/9/2024
*/

#include <stdio.h>
#include <string.h>

int main()
{
	// Declares two character array with the size of 20
	char string1[20] = "SMC "; 
	char string2[20] = "Student"; 

	strcat_s(string1, string2); // Concatenates string2 to string1

	printf("I am a %s", string1); //Prints Strings

	return 0; //End program
}

