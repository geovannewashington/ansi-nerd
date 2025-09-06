// Neso Academy - Class n. 121: 
// Pointer Pointing to an Entire Array  

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    // &arr is the address of the entire array (not just the first element);
    int arr[5] = {1, 2, 3, 4 , 5}; 

    // ptr here is a pointer to an array of 5 integers
    int (*ptr)[5] = &arr;
    
    // here see how this works in matrices:
    int matrix[3][5];

    int (*ptr_m)[5] = matrix; // pointer to row of 5 ints 
                              // then ptr_m moves to the next row 
    return EXIT_SUCCESS;
}










