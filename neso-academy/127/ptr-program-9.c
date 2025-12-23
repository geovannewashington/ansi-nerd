// Neso Academy - Class n. 127: 
// Pointers (Program 9) 

#include <stdio.h>
#include <stdlib.h>

// What should be the contents of the array b at the end of the program?

int main(void) 
{
    int i, j; 

    char a[2][3] = { 
        { 'a', 'b', 'c' }, 
        { 'd', 'e', 'f' } 
    };
    char b[3][2]; 
    
    char *p = *b; // Not quite sure what *b represents here...
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            *(p + 2*j + i) = a[i][j];
        }
    }

    // Printing the elements...
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) 
            printf("%c ", b[i][j]);
        putchar('\n');
    }

    return EXIT_SUCCESS;
}
