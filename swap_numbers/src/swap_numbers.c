/*
 ============================================================================
 Name        : swap_numbers.c
 Author      : vitor emanuel
 Version     :
 Copyright   :
 Description : swap numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1;
	int num2;
	int temp = 0;

	printf("Type two numbers:\n");
	scanf("%d%d", &num1, &num2);

	printf("Before swap: %d %d\n", num1, num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("After swap: %d %d\n", num1, num2);

}
