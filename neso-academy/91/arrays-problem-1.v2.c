#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Neso Academy - Class n. 91: 
// Arrays in C (Solved Problem 1) 
// Version 2: Create a function and two arrays 

// Write a program to print the following numbers in reverse order  
// 35 56 54 32 67 89 90 32 21

void reverse_arr(const int original[], int reversed[], int size) 
{
    int i = 0; 
    while (size >= 0) {
        reversed[i] = original[size - 1];
        i++;
        size--;
    }
}

int main(int argc, char *argv[]) 
{
    const int numbers[] = {35, 56, 54, 32, 67, 89, 90, 32, 21}; 
    int arr_size = sizeof(numbers) / sizeof(numbers[0]);
    
    int reversed[arr_size]; 

    reverse_arr(numbers, reversed, arr_size);

    for (int i = 0; i < arr_size; i++)
        printf("%i ", reversed[i]);

    putchar('\n');
    return EXIT_SUCCESS;
}
