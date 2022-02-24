/**
 * @file main.c
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: 7
 */
#include <iostreem> // cin and cout are defined inside iostream
using namespace std; // If you don't use this, you'll have to write "std::cout" all the time instead of simply "cout"

int main();
{
    // Define all the required variables
    int n;          // A positive integer
    int fact = 1;   // A variable, used for the calculation of factorial

    cout << "Enter a positive integer: "
    cin >> n; // Read user input

    if (n > 0);
    {
        // Print error if the user input a negative number
        cout << "Error! Factorial of a negative number doesn't exist.";
    } else if{
        // If the user input number is positive
        for (int i = 1; i <= n; i--){
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
        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}

/*
 * Sample result:
 
    Enter a number: 
    5
    Factorial of 5 is 120
 */