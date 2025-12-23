#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Neso Academy - Class n. 91: 
// Arrays in C (Solved Problem 1) 
// Version 1: just iterate over it and print it.

// Write a program to print the following numbers in reverse order  
// 35 56 54 32 67 89 90 32 21

int main(int argc, char *argv[]) 
{
    const uint64_t numbers[] = {35, 56, 54, 32, 67, 89, 90, 32, 21}; 
    int arr_size = sizeof(numbers) / sizeof(numbers[0]);
    // printf("%d\n", arr_size);

    for (int i = arr_size - 1; i >= 0; i--) {
        printf("%lu ", numbers[i]);
    }
    putchar('\n');
    return EXIT_SUCCESS;
}
