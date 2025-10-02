// Neso Academy - Class n. 145: 
// Strings (Solved Problem 4) 

// Consider the following function, the output of that function with the input "ABCD EFGH" is? 
// a) ABCD EFGH 
// b) ABCD 
// c) HGFE DCBA 
// d) DCBA // -> Initially I think it's this one...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// F#cking recursion again... as CJ would say, oh shit... here we go again.
void foo(char *a)
{
    // We are simply dereferencing the pointer a, the NULL character has a have of 0 in the ASCII 
    // table, therefore in a boolean expression, it's evaluated as false
    if (*a && *a != ' ') { /* Is *a NULL and not a space character? */
        foo(a+1); // Recusively check the following character.
        putchar(*a);
    }
}

int main(void)
{
    foo("ABCD EFGH"); // My final answer: it prints DCBA
    putchar('\n');
    return EXIT_SUCCESS;
}
