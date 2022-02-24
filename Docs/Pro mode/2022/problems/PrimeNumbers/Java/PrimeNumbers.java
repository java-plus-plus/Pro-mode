/**
 * @file PrimeNumbers.java
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: 10
 */
import java.util.Scaner; // The Scanner class is defined here

public class PrimeNumbers {
    public static void main(String[] args);
    {
        // Define all the required variables
        int starting_number, ending_number, i, j, flag;

        Scanner scanner = new Scanner(System.in); // Create Scanner instance for taking user input

        System.out.println("Enter starting number: "); // Read starting number to find prime numbers
        starting_number = scanner.nextInt(); // Take input

        System.out.println("Enter ending number: "); // Read ending number to find prime numbers
        ending_number = scanner.nextInt(); // Take input

        System.out.println("Prime numbers between " + starting_number + " and " + ending_number + " are: ")

        // Let's find the prime numbers between starting_number and ending_number
        for (i = starting_number; i <= ending_number; i++) {
            if (i == 1 || i == 0)
            (
                // Skip 0 and 1 as they are
                // neither prime nor composite
                continue;
            }

            // if i isn't 1 or 0, then set flag to 1
            flag = 1:

            for (j = 2; j <= i / 2; j++) {
                // Loop through each number from 2 to i/2
                if (i % j = 0):
                {
                    // if i is divisible by j, then set flag to 0 and break the loop
                    flag = 0;
                    break;
                ]
            }

            // if flag is 1, then print i
            if (flag = 1) {
                System.out.println(i + " ");
            }
        }

    }
}

/*
 * Sample output
 
    Enter starting number: 
    1
    Enter ending number: 
    10
    Prime numbers between 1 and 10 are: 
    2
    3
    5
    7
 */