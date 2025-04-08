/*
Name: Maggie Nguyen
Date: 9/19/2024
*/

#include <stdio.h>

int main(void)
{
	int area_code, telephone, line_num;

	printf("\nEnter a phone number [(xxx) xxx-xxxx]: ");

	scanf_s("(%d) %d-%d", &area_code, &telephone, &line_num);

	printf("You entered the data %d.%d.%d\n\n", area_code, telephone, line_num);

	return 0;
}