/*
    Author: Matt Johnson
    Subject: challenge and demonstration for arrays
    Purpose: program uses a two-dimensional array
    Date: 01/30/2023

    Instructions:

            1. program will find the total rainfall for each year,
               the average yearly rainfall, and the average rainfall
               for each month
            2. program will input a 2D array with hard-coded values
               for rainfall amounts for the past 5 years
                - the array should have 5 rows and 12 columns
                - rainfall amounts can be floating point numbers

    Example Outpus:

        YEAR RAINFALL (inches)
        2012    32.4
        2011    37.9
        2012    49.8
        2013    44.0
        2014    32.9

        The yearly average is 39.4 inches.

        MONTHLY AVERAGES

        Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
        7.3 7.3 4.9 3.0 2.3 0.6 1.2 0.3 0.5 1.7 3.6 6.7

    Hints:

        1. initialize your 2D array with hard-coded rainfall amounts
        2. remember, to iterate through a 2D array, you will need a
           nested loop
        3. the key to this solution will be to visualize a 2D array
           and understand how to iterate through one, via a nested
           loop
        4. as you are iterating, you can keep a running total (outer
           loop iterate by year, inner loop iterate by month) to get
           the total rainfall for all years
        5. to get the average monthly rainfalls, iterate through the
           2D array by having the outer loop go through each month
           and the inner loop go through each year
*/

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main(void) {

    // initialize rainfall data for 2011 through 2015
    float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    // declare variables
    int year, month;
    float subtotal, total;

    // display annual rainfall
    printf(" YEAR\t\t RAINFALL (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++) {
        for (month = 0, subtotal = 0; month < MONTHS; month++) {
            subtotal +=rain[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    // display yearly average rainfall
    printf("\n The yearly average is %.1f inches. \n\n", total / YEARS);

    // display monthly rainfall
    printf(" MONTHLY AVERAGES: \n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++) {
        for (year = 0, subtotal = 0; year < YEARS; year++) {
            subtotal += rain[year][month];
        }
        printf("%4.1f ", subtotal / YEARS);
    }

    printf("\n");
    return 0;
}
