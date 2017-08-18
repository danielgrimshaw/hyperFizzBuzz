/*
 * Hyper FizzBuzz (fizzBuzz.c)
 *
 * fizzBuzz.c Copyright (C) 2017 Daniel Grimshaw <danielgrimshaw@berkeley.edu>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
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
 * 8. Variables may be declared, but not set before start is set. Allocation
 *	does not count as setting a variable.
 *
 * PRESENT BEST RUN TIME:
 * 1015 clocks
 * 1.105e-3 seconds
 */

#include <stdio.h>
#include <stdint.h>
#include <time.h>

void fizzBuzz(void) {
	uint_fast8_t i, out = 0;
	for (i=0; i<100; i++) {
		if (i % 3 == 0) {
			printf("Fizz");
			out = 1;
		} if (i % 5 == 0) {
			printf("Buzz");
			out = 1;
		} if (out == 0) {
			printf("%i", i);
		}

		out = 0;
		printf("\n");
	}
}

int main(void) {
	clock_t start, end;
	long int elapsed;

	int i;

	start = clock();

	for (i = 0; i<10; i++) {
		fizzBuzz();
	}
	
	end = clock();

	elapsed = end - start;
	printf("%li clocks\n%Le milliseconds\n",
		elapsed,
		((long double)elapsed)/((long double)CLOCKS_PER_SEC));
	return 0;
}
