/*
    Author: Matt Johnson
    Subject: arrays
    Purpose: program initializes an array
    Date: 01/28/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int array_values[10] = {0, 1, 4, 9, 16};
    int i;

    for (i = 5; i < 10; ++i)
        array_values[i] = i * i;

    for (i = 0; i < 10; ++i)
        printf("array_values[%i] = %i\n", i, array_values[i]);

    return 0;
}
