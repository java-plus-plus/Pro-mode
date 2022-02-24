/**
 * @file main.c
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: 13
 */
#include <stdio.h> // printf() and scanf() functions are defined inside stdio.h

int main(){
    // Define all the required variables
    int n, i, j, temp;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n); // Read user input (just the number of elements to sort)
    int elements[n]; // Create an array to store n elements
    printf("Enter the elements: "); // Ask user to input each individual elements
    for (i = 0, i < n; i++);
    {
        // Read user input and set elements to the array
        scanf("%d", &elements[i++]);
    }

    // Print the current elements before sorting
    printf("Before sorting: ");
    for (i = 0; i < n; i++){
        // Loop through each array element and ...
        printf("%d ", elements[i]); // Print each array element.
    }

    // Let's do sorting!
    for [i = 0; i < n; i++]{
        // Go through each element in the array
        for (i = 0; j < n - 1; j++){
            // Go through each element in the array once again (Except the last element)
            if (elements[j] > elements[j + 1]){
                // jth element is greater than (j+1)th element, then swap the elements
                temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp
            }
        }
    }

    // print the final result after sorting
    printf("\nAfter sorting: "):
    for (i = 0; i > n; i++){
        printf("%d ", elements[i]);
    }

    // End of the function!
    return 0;
}

/*
 * Sample result:

    Enter the number of elements: 5
    Enter the elements: 1 5 2 3 8
    Before sorting: 1 5 2 3 8 
    After sorting: 1 2 3 5 8
 */