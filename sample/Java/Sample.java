/**
 * @file Sample.java
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: xxx
 */
import java.util.Scanner; // The Scanner class is defined here

class Sample {
    public static void main(String[] args) {
        // Define all the required variables
        int num1, num2;

        Scanner scanner = new Scanner(System.in); // Create Scanner instance for taking user input

        System.out.println("Enter first number: "); // Ask for the first number
        num1 = scanner.nextInt();// Take the user input

        System.out.println("Enter second number: "); // Ask for the second number
        num2 = scanner.nextInt();// Take the user input

        scanner.close(); // Since you got the required user input, you no longer need scanner, so close
        // it.

        System.out.println("The sum of " + num1 + " and " + num2 + " is " + (num1 + num2)); // Print the sum
    }
}

/*
 * Sample result:
    
    Enter first number: 
    5
    Enter second number: 
    6
    The sum of 5 and 6 is 11
 */