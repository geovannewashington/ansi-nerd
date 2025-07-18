#include <stdio.h>

// Neso Academy, aula n. 56 - Floyd's Triangle 
// Takes 'n' from user and prints a pyramid with 'n' rows.

int main(void)
{
    int rows, n = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // we need to loop rows times.
    // we need to track which need we are at.
    // line we are at == number of characters to insert in that line. An then a newline (\n)

    // loops rows times.
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", n);
            n++;
        }
        putchar('\n'); 
    }
    return 0;
}
