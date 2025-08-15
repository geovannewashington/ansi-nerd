// Neso Academy - Class n. 99: 
// C program for Matrix Multiplication (Part 2) 

// We want something like this: 

/*
   1. Enter the rows and columns of matrix a: 3 3 
   2. Enter the elements of matrix a: 

   1 2 3 
   1 2 1 
   3 1 2

   3. Enter the rows and columns of matrix b: 3 3 
   4. Enter the elements of matrix b: 

   1 2 3 
   1 2 1 
   3 1 2

   Resultant matrix: 
   12  9 11 
   6   7  7
   10 10 14
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 50


int rows_a, cols_a; 
int rows_b, cols_b; 

void get_matrix_size(char matrix_label) 
{
    printf("Enter the rows and columns for matrix %c: ", matrix_label);
    switch (matrix_label) {
        case 'a':
            scanf("%d %d", &rows_a, &cols_a);
            break;
        case 'b': 
            scanf("%d %d", &rows_b, &cols_b);
            break;
        default: 
            printf("Invalid matrix label\n");
    }
}

void get_matrix_elements(int cols, int matrix[][cols], char matrix_label) 
{
    // Enter the elements of matrix a 
    printf("Enter the elements of matrix %c: \n", matrix_label);
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_a; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void calculate_res_mtx(int resultant_matrix[][cols_b], 
                       int matrix_a[][cols_a], 
                       int matrix_b[][cols_b]) 
{
    // Size of resultant matrix depends on rows of 1st matrix and columns of 2nd matrix.
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_b; j++) {
            // resultant_matrix[i][j] is the element
            for (int k = 0; k < rows_a; k++) {
                    resultant_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
}

void print_resultant(int resultant_matrix[][cols_b])
{
    printf("Resultant matrix: \n");
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_b; j++) {
            if (resultant_matrix[i][j] < 10)  {
                printf("0%d ", resultant_matrix[i][j]);
            } else {
                printf("%d ", resultant_matrix[i][j]);
            }
        }
        printf("\n");
    }
}

int main(void) 
{
    int matrix_a[MAX][MAX];
    int matrix_b[MAX][MAX];
    
    int resultant_matrix[MAX][MAX];
   
    get_matrix_size('a');
    get_matrix_size('b');

    // MUST: cols_a == rows_b, otherwise we stop the program's execution.
    if (cols_a != rows_b) {
        fprintf(stderr, "Column quantity of matrix 'a' must match rows quantity of matrix 'b'\n");
        return EXIT_FAILURE;
    }

    get_matrix_elements(cols_a, matrix_a, 'a');
    get_matrix_elements(cols_b, matrix_b, 'b');

    calculate_res_mtx(resultant_matrix, matrix_a, matrix_b);
    print_resultant(resultant_matrix);

    return EXIT_SUCCESS;
}
