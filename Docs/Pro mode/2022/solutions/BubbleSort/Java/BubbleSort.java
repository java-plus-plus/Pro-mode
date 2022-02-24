
/**
 * @file BubbleSort.java
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: xxx
 */
import java.util.Scanner; // The Scanner class is defined here

public class BubbleSort {
    public static void main(String[] args) {
        // Define all the required variables
        int n, i, j, temp;
        System.out.println("Enter the number of elements");

        Scanner scanner = new Scanner(System.in); // Create Scanner instance for taking user input
        n = scanner.nextInt(); // Read user input (just the number of elements to sort)
        int elements[] = new int[n]; // Create an array to store n elements
        System.out.println("Enter the elements: "); // Ask user to input each individual elements
        for (i = 0; i < n; i++) {
            // Read user input and set elements to the array
            elements[i] = scanner.nextInt();
        }
        scanner.close(); // Since you got the required user input, you no longer need scanner, so close
                         // it.

        // Print the current elements before sorting
        System.out.println("Before sorting: ");
        for (i = 0; i < n; i++) {
            // Loop through each array element and ...
            System.out.print(elements[i] + " "); // Print each array element.
        }

        // Let's do sorting!
        for (i = 0; i < n; i++) {
            // Go through each element in the array
            for (j = 0; j < n - 1; j++) {
                // Go through each element in the array once again (Except the last element)
                if (elements[j] > elements[j + 1]) {
                    // jth element is greater than (j+1)th element, then swap the elements
                    temp = elements[j];
                    elements[j] = elements[j + 1];
                    elements[j + 1] = temp;
                }
            }
        }

        // print the final result after sorting
        System.out.println("\nAfter sorting: ");
        for (i = 0; i < n; i++) {
            System.out.print(elements[i] + " ");
        }

        // End of the function!
    }
}

/*
 * Sample result:
 
    Enter the number of elements
    5
    Enter the elements: 
    1 5 3 8 2
    Before sorting: 
    1 5 3 8 2 
    After sorting: 
    1 2 3 5 8
 */