/*
Name: Maggie Nguyen
Date: 9/28/2024

Discussion 2 - Expressions
*/


#include <stdio.h>

/* The following code checks if student is either a part-time or full time student at smc */
int main(void)
{
    int units;

    printf("Enter the number of units you are taking at smc: ");

    scanf_s("%d", &units);


    /* If statements */
    if (units < 1)
        printf("This person is not considered a student at smc. \n");
    else if (units <= 12)
        printf("This person is considered a part-time student at smc. \n");
    else
        printf("This person is considered a full-time student at smc. \n");

   
    /* Switch statements */
    switch (units) 
    {
    case 0:
        printf("Consider applying for classes at smc. \n");
        break;
    default: 
        if (units <= 12)
            printf("Part time students for the win! \n");
        else
            printf("Whoa! This student is a scholar!!! \n");
    }
    return 0;
}
