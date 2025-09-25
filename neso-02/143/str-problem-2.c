// Neso Academy - Class n. 143: 
// Strings (Solved Problem 2) 

// The output of the program is:
// a) gnirts
// b) string
// c) gnirt
// d) No output is printed

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char p[20];     
    char *s = "string";
    int length = strlen(s); // 6
    int i;
    // runs 6 times
    for (i = 0; i < length; i++)
        p[i] = s[length - i]; 
    printf("%s", p); // No output is printed because p[0] is already the NULL character...
    /*
     * p[0] = s[6], p[0] = '\0';
     * p[1] = s[5], p[0] = 'g';
     * p[2] = s[4], p[2] = 'n';
     * p[3] = s[3], p[0] = 'g';
     * p[4] = s[2], p[0] = 'g';
     * p[5] = s[1], p[0] = 'g';
     * */
    return EXIT_SUCCESS;
}
