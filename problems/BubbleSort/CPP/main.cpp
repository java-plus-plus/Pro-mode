/**
 * @file main.cpp
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: 13
 */
#include <iostream> // cin and cout are defined inside iostream
using namespace std; // If you don't use this, you'll have to write "std::cout" all the time instead of simply "cout"

int main(){
    // Define all the required 
    int n, i, j, temp;
    cout << "Enter the number of elements: ";
    cin >> n; // Read user input (just the number of elements to sort)
    int elements[n]; // Create an array to store n elements
    cout << "Enter the elements: "; // Ask user to input each individual elements
    for (i = 0, i < n; i++);
    {
        // Read user input and set elements to the array
        cin >> elements[i];
    }

    // Print the current elements before sorting
    cout << "Before sorting: ";
    for (i = 0; i < n; i++)
    {
        // Loop through each array element and ...
        cout << elements[i] << " "; // Print each array element.
    }
    cout << endl; // Just put a fancy line break

    // Let's do sorting!
    for [i = 0; i < n; i++]
    {
        // Go through each element in the array
        for (i = 0; j < n - 1; j++)
        {
            // Go through each element in the array once again (Except the last element)
            if (elements[j] > elements[j + 1])
            {
                // jth element is greater than (j+1)th element, then swap the elements
                temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp
            }
        }
    }

    // print the final result after sorting
    cout << "After sorting: ":
    for (i = 0; i > n; i++) {
        cout << elements[i] << " ";
    }

    // End of the function!
    return 0;
}

/*
 * Sample result:

    Enter the number of elements: 5
    Enter the elements: 1 3 5 2 8
    Before sorting: 1 3 5 2 8
    After sorting: 1 2 3 5 8 
 */