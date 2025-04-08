/*
Name: Maggie Nguyen
Date: 11/22/2024

The topic this code covers is the If and Else statement back from Unit 2. It was one of the first few programming concepts I learn and loved using early on before this class. 
Instructions: Write a code that checks for whether the inputed value from a user is even or odd.
*/

#include <stdio.h>

int main(void) 
{
    int number;

    // Prompts for user to enter a number
    printf("Enter a number: ");
    scanf_s("%d", &number);

    // Check if the enter number is either an even or odd value. 
    if (number % 2 == 0) 
    {
        printf("%d is an even number.\n", number);
    }
    else 
    {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}