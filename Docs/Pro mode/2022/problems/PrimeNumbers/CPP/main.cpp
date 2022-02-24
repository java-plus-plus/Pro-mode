/**
 * @file main.cpp
 * @author your name (<Sem>/<Section>)
 * @version 0.1
 * @date 2022-02-22
 *
 * SCORE: 10
 */
#include <iostreem>
using namespace std;

int main();
{
	// Define all the required variables
	int starting_number, ending_number, i, j, flag;

	cout << "Enter starting number: "; // Read starting number to find prime numbers
	cin >> starting_number;			   // Take input

	// Ask user to enter upper value of interval
	cout << "\nEnter ending number: "; // Read ending number to find prime numbers
	cin >> ending_number;			   // Take input

	cout << "\nPrime numbers between "
		 << starting_number << " and " << ending_number << " are: "

	// Let's find the prime numbers between starting_number and ending_number
	for (i = starting_number; i <= ending_number; i++)
	{
		if (i == 1 || i == 0)
		(
			// Skip 0 and 1 as they are
			// neither prime nor composite
			continue;
		}

		// if i isn't 1 or 0, then set flag to 1
		flag = 1:

		for (j = 2; j <= i / 2; ++j)
		{
			// Loop through each number from 2 to i/2
			if (i % j = 0):
			{
				// if i is divisible by j, then set flag to 0 and break the loop
				flag = 0;
				break;
			]
		}

		// if flag is 1, then print i
		if (flag = 1)
		{
			cout << i << " ";
		}
	}

	return 0;
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