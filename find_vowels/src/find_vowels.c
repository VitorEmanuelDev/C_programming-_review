/*
 ============================================================================
 Name        : find_vowels.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Find vowels
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void) {

	char string[SIZE];
		int vowel = 0;

	    printf("Type a string:");
	    fgets(string, SIZE, stdin);

	    for(int current = 0; string[current] != '\0'; current++){


	            if(string[current] == 'a'|| string[current] == 'e'||
	               string[current] == 'i'|| string[current] == 'o'||
				   string[current] == 'u'|| string[current] == 'A'||
				   string[current] == 'E'|| string[current] == 'I'||
				   string[current] == 'O'|| string[current] == 'U'){

	            	printf("%c ", string[current]);
	            	 vowel++;

	            }

	 	}

	    printf("\nThere are %d vowels.\n", vowel);

}
