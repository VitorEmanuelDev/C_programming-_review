/*
 ============================================================================
 Name        : largest_smallest_number.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		int num1;
		int num2;


		printf("Type two numbers:\n");
		scanf("%d%d", &num1, &num2);

		if(num1 > num2){

			printf("Largest is: %d\n", num1);
			printf("Smallest is: %d\n", num2);

		} else if (num1 == num2){

			printf("It's the same number.");

		}else {

			printf("Largest is: %d\n", num2);
			printf("Smallest is: %d\n", num1);

		}

}
