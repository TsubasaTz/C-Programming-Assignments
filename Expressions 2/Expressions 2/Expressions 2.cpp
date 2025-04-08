/*
Name: Maggie Nguyen
Date: 9/28/2024
*/

#include <stdio.h>

int main(void)
{
    int windspeed; 


    printf("Enter a wind speed (in knots):");

    scanf_s("%d", &windspeed);


    if (windspeed < 1)
        printf("Calm \n");
    else if (windspeed <= 3)
        printf("Light Air \n");
    else if (windspeed <= 27)
        printf("Breeze \n");
    else if (windspeed <= 47)
        printf("Gale \n");
    else if (windspeed <= 63)
        printf("Storm \n");
    else  
        printf("Hurricane \n");
    

    return 0;
}