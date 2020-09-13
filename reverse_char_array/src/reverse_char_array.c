/*
 ============================================================================
 Name        : reverse_char_array.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Reverse string of chars
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void) {

	char string[SIZE];

	printf("Type a string:");
	fgets(string, SIZE, stdin);
	int length = sizeof(string);

	for(int current = length - 1; current >= 0; current--){

		printf("%c", string[current]);

	}

}
