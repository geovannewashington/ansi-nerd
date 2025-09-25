// Neso Academy - Class n. 142: 
// Array of Strings  

// In C, an "array of strings" is usually implemented as a one-dimensional array of pointers to characters. 
// Each pointers points to the first chracter of a string (often a string literal).
// char *fruits[] = { "Apple", "Banana", "Watermelon" };
// Here, fruits[0] points to the string "Apple", fruits[1] to "Banana", and so on... 

// An alternative approach is using a 2D chracter array (matrix):
// char fruits[][10] = { "Apple", "Banana", "Watermelon" }; 
// While this approach ensures all strings are mutable and stored contiguously, it may waste memory
// if strings are shorter than the allocated lenght. It's also less flexible for varying-length strings.

// In fact, the C standard 'argv' array in main is an array of pointers to char:
// int main(int argc, char *argv[])
// argv[0] points to the program name argv[1] to the first command-line argument, etc.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Array of pointers to string literals
    const char *arr[] = {"Hello", "World", "| C Programming"};

    // Compute the number of elements in the array
    size_t arr_len = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < arr_len; i++)
        printf("%s ", arr[i]);
    
    putchar('\n');
    // Output: Hello World | C Programming 

    return EXIT_SUCCESS;
}
