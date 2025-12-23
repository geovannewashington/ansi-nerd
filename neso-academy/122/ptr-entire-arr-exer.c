// Neso Academy - Class n. 122: 
// Pointer Pointing to an Entire Array (Solved Problem)  

#include <stdio.h>
#include <stdlib.h>

// What is the output of the following program?

int main(void) 
{
    // Note that we didn't provide the number of 'rows' which is totally valid syntax in C 
    // as long as we provide the number of columns, so the compiler can infer n. of rows from it.
    int a[][3] = {1, 2, 3, 4, 5, 6}; // same as int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int (*ptr)[3] = a; // a here is not the whole 2D array, just the first line
    printf("%d %d ", (*ptr)[1], (*ptr)[2]); // 2 3 
    ++ptr; // 'jumps' a row, so now (*ptr) points to a[1][0]
    printf("%d %d ", (*ptr)[1], (*ptr)[2]); // 5 6 

    printf("\n");    
    // My final answer for the ouput:  2 3 5 6 -> option (a)
    return EXIT_SUCCESS;
}
