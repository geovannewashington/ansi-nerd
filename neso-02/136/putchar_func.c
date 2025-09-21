// Neso Academy - Class n. 136: 
// putchar() Function in C  

#include <stdio.h>
#include <stdlib.h>

// putchar function signature
// int putchar(int character);
// returns in int. On success, the character written, cast to an int.
// If an error occurs it returns EOF which is a macro defined in stdio.h representing -1 (tipically)

// OUTPUT of this program: AA<whole uppercase alphabet>

int main(void) 
{
    // 1. We can pass the character literal
    putchar('A');

    // 2. Or we can pass the equivalent integer in the ASCII table
    putchar(65);
    
    // 3. Nice little example using putchar
    
    int ch; 
    for (ch = 'A'; ch <= 'Z'; ch++) {
        putchar(ch);
        putchar(' ');
    }
    putchar('\n');
    
    return EXIT_SUCCESS;
}
