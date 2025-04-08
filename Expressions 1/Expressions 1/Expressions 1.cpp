/*
Name: Maggie Nguyen
Date: 9/28/2024
*/

#include <stdio.h>

int main(void)
{
    int number; 


    printf("\nEnter a number: ");

    scanf_s("%d", &number);


    if (number > 0 && number < 10)
        printf("The number %d has 1 digit \n\n", number);
    else if (number >= 10 && number < 100)
        printf("The number %d has 2 digits\n\n", number);
    else if (number >= 100 && number < 1000)
        printf("The number %d has 3 digits\n\n", number);
    else if (number >= 1000 && number < 10000)
        printf("The number %d has 4 digits\n\n", number);
    else
        printf("The number needs to be from 1 to 999\n\n");
    

    return 0;
}