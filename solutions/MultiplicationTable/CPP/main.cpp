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
    int num;

    cout << "Enter any number: "; // Ask for the user input to multiply by i -> 10
    cin >> num;                   // Take the user input

    for (int i = 1; i <= 10; i++)
    {
        /*
            Execute below code 10 times,
            initially value of i will be 1,
            and in each iteration the value of i will incremented by 1
        */
        cout << i << " x " << num << " = " << i * num << endl; // Print the value of i * num
    }
}

/*
 * Sample result:

    Enter any number: 5
    1 x 5 = 5
    2 x 5 = 10
    3 x 5 = 15
    4 x 5 = 20
    5 x 5 = 25
    6 x 5 = 30
    7 x 5 = 35
    8 x 5 = 40
    9 x 5 = 45
    10 x 5 = 50
*/