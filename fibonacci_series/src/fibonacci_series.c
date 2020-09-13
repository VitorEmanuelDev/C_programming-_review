/*
 ============================================================================
 Name        : fibonacci_series.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : fibonacci series
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int N;
	int a = 0;
	int b = 1;
	int c = 0;

	printf("Type a number:");
	scanf("%d", &N);

	for(int current = 0; current < N; current++){

		printf("%d ", a);
		printf("%d ", b);

		c = a + b;
		a = c + b;
		b = a + c;

		printf("%d ", c);

	}

}
