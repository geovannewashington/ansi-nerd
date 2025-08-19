#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

// Neso Academy - Class n. 97: 
// Multidimensional Arrays (Solved Problem) 

// Question: Write a program that reads a 5x5 array of integers and then prints the row sum and 
// he column sum.

/*
Example 
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1  
Enter row 3: 2 8 6 23 1 
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0 

Output:
Row total: 30 27 40 36 28
Column total: 34 37 32 21
*/

// #define MAX 1000
void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void print_arr(int cols, int matrix[][cols]) 
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    } 
}

int main(void) 
{
    int arr[5][5] = {0}; // 5 by 5 multi-dimensional array with all elements initalized to 0.
    int rc;              // rc stands for return code, it's a convention 

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            while ((rc = scanf("%d", &arr[i][j])) == 0) { // neither success or EOF
                clear_input_buffer();
                printf("Enter row %d: ", i + 1);
            }
        }
    }

    print_arr(5, arr);
    return EXIT_SUCCESS;
}



