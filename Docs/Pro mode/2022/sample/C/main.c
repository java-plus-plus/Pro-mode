/**
 * @file main.c
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: xxx
 */
#include <stdio.h> // printf() and scanf() functions are defined inside stdio.h

int main()
{
    // Define all the required variables
    int num1, num2;

    printf("Enter first number: "); // Ask for the user input first number
    scanf("%d", &num1);            // Take the user input

    printf("Enter second number: "); // Ask for the user input second number
    scanf("%d", &num2);            // Take the user input

    printf("%d + %d = %d", num1, num2, num1 + num2); // Print the sum of the two numbers
}

/*
 * Sample result:

    Enter first number: 5
    Enter second number: 6
    5 + 6 = 11
 */