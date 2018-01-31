/*
			* Problem 7 *
	Find the 10,001st prime number
*/

// Imports iostream for use in printing
#include <iostream>

// Namespace declaration to use the std library
using namespace std;

// Main function
int main(){

	// Sets the variables for the prime counter(c), number counter(n), and last prime
	int n = 1;
	int c = 1;
	int prime;

	// Loops all the way until the prime counter reaches 10,001
	while(n <= 10001){

		// Standard algorithm for checking if a number is prime
		// All non-primes are multiples of 2, 3, and 5 at their root
		if(c % 2 != 0 & c % 3 != 0 & c % 5 != 0){
			// Checks if the number is the 10,001st one, then sets it as prime and breaks the loop
			if(n == 10001){
				prime = c;
				break;
			}

			// Increments both counters
			n++;
			c++;
		}

		// Increments just the number counter
		else{
			c++;
		}
	}

	// Prints out the prime
	cout << prime << endl;



return 0;

}
