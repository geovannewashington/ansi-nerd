#include "stdio.h"

/* Neso Academy - class n. 48 */
// Special Programs in C - Pyramid of Stars

int main(int argc, char *argv[])
{
    int rows; 
    printf("How many rows do you want in your pyramid? ");
    scanf("%d", &rows);

    int total_columns = (2 * rows - 1);
    
    // row's loop
    //  NOTE: when i = 0, this is the first row, that is, the pyramid gets printed
    //  from top to bottom my dear fried.
    for (int i = 1; i <= rows; i++) {
        // column's loop
        for (int j = 1; j <= total_columns; j++)
            if (j >= rows-(i-1) && j <= rows+(i-1))
                printf("*");
            else 
                printf(" ");
        printf("\n");
    }

    return 0;
}
