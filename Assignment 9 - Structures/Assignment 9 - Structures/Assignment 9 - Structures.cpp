/*
Name: Maggie Nguyen
Date: 11/17/2024
*/
#include <stdio.h>

// Define a structure for the newborn
struct newborndata
{
    char name[50];
    int date;
    int time;
};

int main(void)
{
    struct newborndata Baby;

    // Prompt the user for input
    printf("Enter the newborn's first name: ");
    scanf_s(" %s", Baby.name);

    printf("Enter the newborn's date of birth (MMDDYY format, e.g., 022406): ");
    scanf_s("%d", &Baby.date);

    printf("Enter the newborn's time of birth (HHMM format, e.g., 0825): ");
    scanf_s("%d", &Baby.time);

    // Print the entered data
    printf("\n--- Newborn Data ---\n");
    printf("Name: %s\n", Baby.name);
    printf("Date: %06d\n", Baby.date);
    printf("Time: %04d\n", Baby.time);


    return 0;
}
