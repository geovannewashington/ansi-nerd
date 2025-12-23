#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// Neso Academy - Class n. 96: 
// Introduction to Three-dimensional (3D) arrays 

int main(int argc, char *argv[]) 
{
    // Imagining 3D-arrays
    // int arr[2][2][3]; // we can think of this as: two two-dimensional arrays with two rows and three columns

    ///////////////////////////////////////////////////////////////////////////////////////////////
    // Initializing 3D-arrays
    int arr2[2][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 

    // Better method (easier to read)
    int arr3[2][2][3] = {
                        {{1, 2, 3}, {4, 5, 6}},
                        {{7, 8, 9}, {10, 11, 12}} 
    };

    ///////////////////////////////////////////////////////////////////////////////////////////////
    // Printing the elements of 3D arrays 
    
    // We can use three nested loops
    char num_str[100]; 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                sprintf(num_str, "%d", arr3[i][j][k]);
                
                if (arr3[i][j][k] < 10) {
                    printf("%*s", 2, num_str);
                } else {
                    printf("%d ", arr3[i][j][k]);
                }
            }
            putchar('\n');
        }
        printf("\n");
    }
/*
    1 2 3 
    4 5 6 

    7 8 9 
    10 11 12
*/
    return EXIT_SUCCESS;
}
