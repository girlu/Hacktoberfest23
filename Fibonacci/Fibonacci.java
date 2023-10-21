package Fibonacci;

/*
package whatever //do not write package name here */

public class Fibonacci{

	// Recursive function to print the Fibonacci series
	static void fib(int n, int prev1, int prev2) {
		if (n < 3) {
			return;
		}
		int fn = prev1 + prev2;
		prev2 = prev1;
		prev1 = fn;
		System.out.print(fn + " ");
		fib(n - 1, prev1, prev2);
	}

	// Function that handles the first two terms and calls the recursive function
	static void printFib(int n) {
		// When the number of terms is less than 1
		if (n < 1) {
			System.out.println("Invalid number of terms");
		}
		// When the number of terms is 1
		else if (n == 1) {
			System.out.println(0);
		}
		// When the number of terms is 2
		else if (n == 2) {
			System.out.println("0 1");
		}
		// Number of terms greater than 2
		else {
			System.out.print("0 1 ");
			fib(n, 1, 0);
		}
	}

	public static void main(String[] args) {
		int n = 9;
		// Function call
		printFib(n);
	}
}
