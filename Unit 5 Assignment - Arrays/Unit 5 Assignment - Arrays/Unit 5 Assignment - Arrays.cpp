/* 
Name: Maggie Nguyen
Date: 10/18/2024
*/

#include <stdio.h>  

int main(void)
{
    int numbers[10];  // Declare an array "numbers" to store 10 integers
    int count = 0;    // Variable "count" to track occurrences 
    int checkNumber;  // Variable "checkNumber" to store the number we are checking for

    printf("Enter 10 integer values:\n");  // Prompt the user to enter 10 integers
    for (int i = 0; i < 10; i++)  // Loop to get 10 values from the user
    {
        printf("Enter value %d: ", i + 1); 
        scanf_s("%d", &numbers[i]);  // Read the input value and store it in the array
    }

    printf("Enter a number to count the number of times it occurs in the array: ");  // Ask the user for the number to search for
    scanf_s("%d", &checkNumber);  // Read the number to check for occurrences

    for (int i = 0; i < 10; i++)  // Loop through the array to check for occurrences of 'checkNumber'
    {
        if (numbers[i] == checkNumber)  // If the current array element equals 'checkNumber'
            count++;  
    }

    // Output the total number of occurrences found
    printf("The number times %d occurs in the array is: %d\n", checkNumber, count);

    return 0;  // End of code
}