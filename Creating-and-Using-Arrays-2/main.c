/*
    Author: Matt Johnson
    Subject: arrays
    Purpose: program calculates an array of grades
    Date: 01/28/2023

    Notes:

        1. program adds an if-else block
        2. program prints a letter grade
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades: \n");

    for (int i = 0; i < count; ++i) {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)(sum / count);
    printf("\nAverage of the ten grades entered is: %.2f\n", average);

    if (average >= 90.00)
        printf("Letter grade is: A\n");
    else if (average < 90.00 && average >= 80.00)
        printf("Letter grade is: B\n");
    else if (average < 80.00 && average >= 70.00)
        printf("Letter grade is: C\n");
    else if (average < 70.00 && average >= 60.00)
        printf("Letter grade is: D\n");
    else
        printf("Letter grade is: F\n");

    return 0;
}
