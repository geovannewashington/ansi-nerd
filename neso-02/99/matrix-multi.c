#include <stdio.h>
#include <stdlib.h>

#define MAX 50

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


int main(int argc, char *argv[]) 
{
    int matrix_a[MAX][MAX];
    int matrix_b[MAX][MAX];

    int rows_a, columns_a; 
    int rows_b, columns_b; 

    printf("Enter the row and columns of matrix a: ");
    scanf("%d %d", &rows_a, &columns_a);
   
    printf("rows_a: %d, columns_a: %d\n", rows_a, columns_a);

    // Enter the elements of matrix a 
    printf("Enter the elements of matrix a: \n");
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < columns_a; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("Enter the row and columns of matrix b: ");
    scanf("%d %d", &rows_b, &columns_b);
    // MUST: columns_a == rows_b, otherwise we stop the program's execution.

    // Enter the elements of matrix b
    printf("Enter the elements of matrix b: \n");
    for (int i = 0; i < rows_b; i++) {
        for (int j = 0; j < columns_b; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    
    int resultant_matrix[MAX][MAX];
    // Calculate resultant matrix:
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < rows_b; j++) {
            printf("%d esta mutliplicando %d\n", matrix_a[i][j], matrix_b[j][i]);
            result += matrix_a[i][j] * matrix_b[j][i];
        }
    }

    // print resultant
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultant_matrix[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}






























