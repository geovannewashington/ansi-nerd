#include <stdio.h>

/* Aula n.39 - Conditionals (Switch) */

int main(int argc, char *argv[])
{
    // switch mimics the behavior of if...else clauses     
    int x = 2;

    switch(x) {
        case 1: 
            puts("x is one.");
            // if we ommit the break keyword, even if x is 1, subsequent 
            // expressions will still get evaluated until we reach any break statement.
            break; 
        case 2: 
            puts("x is two.");
        case 3: 
            puts("x is three.");
            break;
        default:
            puts("x is a number other than one, two or three.");
    }

    return 0;
}
