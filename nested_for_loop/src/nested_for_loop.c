/*
 ============================================================================
 Name        : nested_for_loop.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : nested loop
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	for(int currentX = 0; currentX < 5; currentX++){

		for(int currentY = 0; currentY < 5; currentY++){

			printf("(%d , %d)", currentX, currentY);

		}

	}
}
