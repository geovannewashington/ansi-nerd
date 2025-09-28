// example.c -> First example of an application using function pointers

// 1. Using funcion pointers as callbacks
// Reminder: a callback functions is a functio that is passed to another function and eventually 
// executed withing that function... 

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// Define a function pointer type for a callback that takes an int and returns an int
typedef int (*callback_t)(int);

// Example callback functions
int square(int x)
{
    return x * x;
}

int increment(int x)
{
    return x + 1;
}

int double_val(int x)
{
    return x * 2;
}

// A function that applies a callback to every element of an array
void map(int *arr, size_t arr_size, callback_t func)
{
    for (size_t i = 0; i < arr_size; i++) 
        arr[i] = func(arr[i]);
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5}; 
    size_t arr_size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original: ");
    for (size_t i = 0; i < arr_size; i++) printf("%d ", numbers[i]);
    printf("\n");
   
    // Apply square
    map(numbers, arr_size, square);
    printf("Squared: ");
    for (size_t i = 0; i < arr_size; i++) printf("%d ", numbers[i]);
    printf("\n");


    // Apply increment
    map(numbers, arr_size, increment);
    printf("Incremented: ");
    for (size_t i = 0; i < arr_size; i++) printf("%d ", numbers[i]);
    printf("\n");


    // Apply double_val
    map(numbers, arr_size, double_val);
    printf("Doubled: ");
    for (size_t i = 0; i < arr_size; i++) printf("%d ", numbers[i]);
    printf("\n");
    
    return EXIT_SUCCESS;
}
