// Neso Academy - Class n. 118: 
// Processing the Multidimensional Array Elements (or) Address Arithmetic of Multidimensional Arrays 

#include <stdio.h>
#include <stdlib.h>

// 2d and 3d (and higher-dimensional arrays) still contiguous in memory.

///////////////////////////////////////////////////////////////////////////////////////////////////
// 2D Array
// int a[2][2]; -> two 1d arrays, each of which contains 2 elements

int main(void) 
{
    int arr[2][2] = {
        { 10, 20 },
        { 30, 40 },
    };
    
    // When using arr it will decay the a pointer of the first 1d array
    // Which means that arr + 1 will point to the second 1d array
    printf("%p\n", arr + 1); // same address of printf("%p\n", &arr[1][0]);  
    printf("%p\n", &arr[1][0]);
    
    // so if we want to access the element itself:
    // **arr => *(*arr) => *(*arr[0]) => *(&arr[0][0]) => a[0][0] = 10
    printf("\n");

    int arr_tri[2][2][2] = {
        { 
            {10, 20},
            {30, 40} 
        },
        { 
            {50, 60},
            {70, 80}
        }
    }; 

    printf("%p\n", arr_tri + 1); // same memory address as &arr_tri[1][0][0]
    printf("%p\n", &arr_tri[1][0][0]);

    return EXIT_SUCCESS;
}










