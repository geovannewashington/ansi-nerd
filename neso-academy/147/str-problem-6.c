// Neso Academy - Class n. 147: 
// Strings (Solved Problem 6) 

// Determine the output? 
// a) 1 
// b) 2 
// c) 4 
// d) 6 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *c = "GATECSIT2017";
    char *p = c;
    // So I guess we're casting it to an integer because strlen actually returns size_t
    // printf("%d", (int)strlen(c+2[p]-6[p]-1));
    printf("%d", (int)strlen(c+p[2]-p[6]-1));
    // 2[p] is equivalent to *(2+p)
    // p[2] is equivalent to *(p+2)
    return EXIT_SUCCESS;
}
