#include "stdio.h"

/* Neso Academy - class n. 47 */
/* What is the output of the following C program?*/
// possible answers: 1) x = 4| 2) x = 2 | 3) Compiler Error | 4) x = 0
// x = 2, option 2 

int main(int argc, char *argv[])
{
    int x = 3;
    // since at this point x == 3
    // the following verification's body will not be trigerred
    if (x == 2) 
        x = 0;
    // x at this point is 3. 
    if (x == 3) 
        x++;
    else 
        x += 2; 
    // x at this point is 4
    printf("x = %d\n", x);
    return 0;
}
