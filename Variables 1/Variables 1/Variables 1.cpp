/* 
Name: Maggie Nguyen
Date: 9/19/2024
*/

#include <stdio.h>

int main(void) 
{
	int month, day, year; 

	printf("\nEnter a date (mm/dd/yyyy): ");

	scanf_s("%d/%d/%d" , &month, &day, &year);

	printf("You entered the date %d%d%d\n\n", year, month, day);

	return 0; 
}