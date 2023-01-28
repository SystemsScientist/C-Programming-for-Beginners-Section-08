/*
    Author: Matt Johnson
    Subject: arrays
    Purpose: program calculates an array of grades
    Date: 01/28/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int grades[10];                         // array stores 10 values
    int count = 10;                         // number of values to be read
    long sum = 0;                           // sum of the numbers
    float average = 0.0f;                   // average of the numbers

    printf("\nEnter the 10 grades: \n");    // prompt for the input

    // read the ten numbers to be averaged
    for (int i = 0; i < count; ++i) {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);            // read a grade
        sum += grades[i];                   // add it to sum
    }

    average = (float)(sum / count);         // average
    printf("\nAverage of the ten grades entered is: %.2f\n", average);

    return 0;
}
