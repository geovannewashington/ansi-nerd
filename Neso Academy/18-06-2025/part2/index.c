#include "stdio.h"

/* Neso Academy - class n. 48 */
// Special Programs in C - Pyramid of Stars

int main(int argc, char *argv[])
{
    int rows; 
    printf("How many rows do you want in your pyramid? ");
    scanf("%d", &rows);
  
    // row's loop
    for (int i = 1; i <= rows; i++) {
        // NOTE: 2 * rows - 1 == total quantity of columns for this pyramid   
        int total_columns = (2 * rows - 1);

        // column's loop
        for (int j = 1; j <= total_columns; j++)
            if (j >= rows-(i-1) && j <= rows+(i+1))
                printf("*");
            else 
                printf(" ");
    }

    return 0;
}
