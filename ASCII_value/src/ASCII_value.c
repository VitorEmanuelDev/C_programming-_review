/*
 ============================================================================
 Name        : ASCII_value.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Program to show the value of any ASCII character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int value = 0;
	char character;

	printf("Type any character:");
	scanf("%c", &character);

	value = character;//not necessary, but it makes it easier to read.

	printf("%d", value);

}
