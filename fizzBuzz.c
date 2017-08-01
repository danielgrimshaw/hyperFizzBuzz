/*
 * Hyper FizzBuzz
 *
 * Copyright (c) 2017 Daniel Grimshaw <danielgrimshaw@berkeley.edu>
 *
 * The fastest "readable" implementation of the simple programming challenge
 * FizzBuzz
 *
 * The rules:
 * 1. The average programmer must be able to understand the code
 * 2. Code must operate in user space only, excepting publicly available
 *	libraries. Only the FizzBuzz algorithm is to be optimised
 * 3. Code must be easily modifiable for variations on FizzBuzz
 * 4. FizzBuzz must run for numbers from 0 to 99
 * 5. FizzBuzz must print Fizz for every number divisible by 3
 * 6. FizzBuzz must print Buzz for every number divisible by 5
 * 7. FizzBuzz must be printed in sequential order
 * 8. Variables may be declared, but not set before start is set.
 *
 * PRESENT BEST RUN TIME:
 * NaN clocks
 * NaN milliseconds
 */

#include <stdio.h>
#include <time.h>

int main(void) {
	clock_t start, end;
	long int elapsed;

	int i;

	start = clock();

	// Code allowed only here

	end = clock();
	
	elapsed = end - start;
	printf("%li clocks\n%Le milliseconds\n",
	       elapsed,
	       ((long double)elapsed)/((long double)CLOCKS_PER_SEC));
	return 0;
}
