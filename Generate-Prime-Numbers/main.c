/*
    Author: Matt Johnson
    Subject: arrays
    Purpose: generate prime numbers from 3 to 100
    Date: 0129/2023

    Instructions:

        1. program provides no input
        2. program outputs each prime number separated
           by a space on a single line
        3. program creates an array that will store each
           prime number as it is generated
        4. program hard-codes the first two prime numbers
           (2 and 3) in the primes array
        5. program utilizes loops to find prime numbers
           up to 100 and a loop to print out the primes
           array

    Hint:

        the criteria that can be used to identify a prime
        number is that a number is considered prime if it
        is not evenly divisible by any other pervious prime
        numbers

        use the following as an exit condition in the inner-
        most loop

            - p / primes[i] >= primes[i]
            - a test to ensure that the value of p does not
              exceed the square root of primes[i]

        program can be more efficient by skipping any checks
        for even numbers (as they cannot be prime)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    // declare and initialize variables
    int p;
    int i;
    int primes[50] = {0};
    int prime_index = 2;
    bool is_prime = false; // flag

    // hard-code prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p < 100; p = p + 2) {
        is_prime = true;

        for (i = 1; (is_prime) && (p / primes[i] >= primes[i]); ++i) {
            if (p % primes[i] == 0) {
                is_prime = false;
            }
        }

        if (is_prime == true) {
            primes[prime_index] = p;
            ++prime_index;
        }
    }

    for (i = 0; i < prime_index; ++i)
        printf("%i ", primes[i]);

    printf("\n");
    return 0;
}
