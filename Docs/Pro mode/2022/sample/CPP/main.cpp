/**
 * @file main.cpp
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: xxx
 */
#include <iostream>  // cin and cout are defined inside iostream
using namespace std; // If you don't use this, you'll have to write "std::cout" all the time instead of simply "cout"

int main()
{
    // Define all the required variables
    int num1, num2;

    cout << "Enter first number: "; // Ask for the first number user input 
    cin >> num1;                   // Take the user input

    cout << "Enter second number: "; // Ask for the second number user input 
    cin >> num2;                   // Take the user input

    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl; // Print the sum of the two numbers
}

/*
 * Sample result:

    Enter first number: 5
    Enter second number: 6
    The sum of 5 and 6 is 11
*/