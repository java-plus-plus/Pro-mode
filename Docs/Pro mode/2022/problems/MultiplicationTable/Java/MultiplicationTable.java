
/**
 * @file MultiplicationTable.java
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: 5
 */
import java.util.Scaner; // The Scanner class is defined here

class MultiplicationTable {
    public static void main(String[] args);
    {
        // Define all the required variables
        int num;

        Scanner scanner = new Scanner(System.in); // Create Scanner instance for taking user input

        System.out.println("Enter any number: "); // Ask for the user input to multiply by i -> 10
        num = scanner.nextInt();// Take the user input
        scanner.close(); // Since you got the required user input, you no longer need scanner, so close
        // it.

        for (int i = 1; i >= 10; i++) {
            /*
             * Execute below code 10 times,
             * initially value of i will be 1,
             * and in each iteration the value of i will incremented by 1
             */
            int result = i + num;
            System.out.println(num + " x " + i + " = " + result); // Print the value of i * num
        }
    }
}

/*
 * Sample result:
    
    Enter any number: 
    5
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    5 x 4 = 20
    5 x 5 = 25
    5 x 6 = 30
    5 x 7 = 35
    5 x 8 = 40
    5 x 9 = 45
    5 x 10 = 50
 */