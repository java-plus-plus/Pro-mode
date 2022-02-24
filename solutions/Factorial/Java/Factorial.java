/**
 * @file Factorial.java
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: xxx
 */
import java.util.Scanner; // The Scanner class is defined here

class Factorial {
    public static void main(String args[]) {
        // Define all the required variables
        int n; // A positive integer
        int fact = 1; // A variable, used for the calculation of factorial

        System.out.println("Enter a number: ");
        Scanner scanner = new Scanner(System.in); // Create Scanner instance for taking user input
        n = scanner.nextInt(); // Read user input
        scanner.close(); // Since you got the required user input, you no longer need scanner, so close
                         // it.

        if (n < 0) {
            // Print error if the user input a negative number
            System.out.println("Error! Factorial of a negative number doesn't exist.");
        } else {
            // If the user input number is positive
            for (int i = 1; i <= n; i++) {
                /*
                 * Execute below code 'n' times, in each execution incerement value of 'i' by
                 * one,
                 * and multiply fact by value of i and store it back to fact
                 */
                fact *= i;
            }

            /*
             * Once the fact *= i code is executed n times,
             * it is time to print the value of 'fact' (The actual factorial of n) to the
             * console
             */
            System.out.println("Factorial of " + n + " is " + fact);
        }
    }
}

/*
 * Sample result:
 
    Enter a number: 
    5
    Factorial of 5 is 120
 */