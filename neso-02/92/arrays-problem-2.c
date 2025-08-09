#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// Neso Academy - Class n. 92: 
// Arrays in C (Solved Problem 2) 

// Write a program to check whether any of the digits in a number appears twice.

int get_size(int number)
{
    int size;
    while (number != 0) {
        number /= 10;
        size++;
    }
    return size;
}

int main(int argc, char *argv[]) 
{
    int number = 22234; // note that 7 appears twice
    printf("Number: %d\n", number);

    int seen[10] = {0}; // 0-9
    int arr_size = get_size(number); // should be 5
    
    // flag 
    bool appears_twice = false;
    for (int i = 0; number != 0; i++) {
        seen[number%10]++;
        number = number / 10; 
    }

    for (int i = 0; i < 10; i++) {
        if (seen[i] >= 2)
            appears_twice = true;
    }

    if (appears_twice)
        printf("Contains duplicated digits\n");
    else 
        printf("Does not contain duplicated digits\n");

    return EXIT_SUCCESS;
}
