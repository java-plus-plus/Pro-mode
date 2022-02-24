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
    int n;        // A positive integer
    int fact = 1; // A variable, used for the calculation of factorial

    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read user input

    if (n < 0)
    {
        // Print error if the user input a negative number
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        // If the user input number is positive
        for (int i = 1; i <= n; i++)
        {
            /*
                Execute below code 'n' times, in each execution incerement value of 'i' by one,
                and multiply fact by value of i and store it back to fact
            */
            fact *= i;
        }

        /*
         Once the fact *= i code is executed n times,
         it is time to print the value of 'fact' (The actual factorial of n) to the console
        */
        printf("Factorial of %d = %d", n, fact);
    }

    return 0;
}

/*
 * Sample result:
 
    Enter a number: 
    5
    Factorial of 5 is 120
 */