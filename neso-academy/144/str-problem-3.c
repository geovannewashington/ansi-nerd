// Neso Academy - Class n. 144: 
// Strings (Solved Problem 3) 

// What does the following fragment of C program prints?
// a) GATE2011
// b) E2011
// c) 2011
// d) 011 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char c[] = "GATE2011";    
    char *p = c;
    printf("%s\n", p + p[3] - p[1]); // So it should print 2011, option c.
    // Ok... we have some kind of pointer arithmetic happening here...
    // (p + E) - A
    // I'm guessing we have to replace the values with their decimal ASCII values...
    // (p + 69 - 65) -> p + 4
    return EXIT_SUCCESS;
}
