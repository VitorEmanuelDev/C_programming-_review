/*
 ============================================================================
 Name        : factorial.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : factorial
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    unsigned long long factorial = 1;

    printf("Type a number: ");
    scanf("%d", &number);

    if (number < 0){

        printf("Invalid number.");

    } else {

        for (int current = 1; current <= number; current++) {

            factorial *= current;

        }

        printf("Factorial of %d = %llu", number, factorial);

    }

}
