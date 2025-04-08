/*
Name: Maggie Nguyen
Date: 10/6/2024
*/

#include <stdio.h>

int main(void)
{
    // Using for loop to count from 1 to 100, increasing by increments of 9. 
   
    for (int i = 1; i <= 100; i+=9)

    {
        printf("%d\n", i);
    }

    printf("You reach 100!");

    printf("\n");
    printf("---\n");

    // Using while loop to indicate that the current number we are at is below 100% 
    int i = 1;

    while (i < 100)
    {
        printf("%d\n", i);
        printf("You are below 100 percent \n");
        i += 9;
    }

    printf("100\n");
    printf("You reach 100!\n");

    return 0;
}

