#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// Neso Academy - Class n. 95: 
// Introduction to Two-dimensional (2D) arrays 

int main(int argc, char *argv[]) 
{
    // The generic way of declaring a multi-dimensional array 
    // data_type array_name[size1][size2]...[sizeN];
        
    // First array == rows 
    int matrix[3][4]; // Declares a 2D array with 3 rows and 4 columns 
    // 3 * 4 * sizeof(int) = 3 * 4 * 4 = 48 in bytes (assuming sizeof(int) == 4)
    
    // The generic way of discovering the size of a multi-dimensional array in bytes
    // size1 * size2 ... sizeN * sizeof(data_type) 
    
    ///////////////////////////////////////////////////////////////////////////////////////////////
    // Initializing Two-dimensional arrays:
    int a[3][4] = {1, 2, 3, 4, 5, 6}; // sometimes confusing

    // A more readable format:
    //                row1       row2       row3
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    /*
    or even: 
    int b[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; 
    */
    
    ///////////////////////////////////////////////////////////////////////////////////////////////
    // Accesing Two-dimensional Arrays:
    
    // We print out the elements of a Two-dimensional using two nestep loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
    
    return EXIT_SUCCESS;
}
