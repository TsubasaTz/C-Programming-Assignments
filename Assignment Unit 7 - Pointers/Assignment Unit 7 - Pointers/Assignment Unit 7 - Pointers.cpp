/*
Name: Maggie Nguyen
Date: 11/2/2024
*/

#include <stdio.h>

int main(void)
{
	int myGrade = 100;     
	int* pointer = &myGrade; 

	
	printf("My Grade: %d\n", myGrade);
	printf("Address of My Grade: %p\n", &myGrade);

	return 0; 
}
