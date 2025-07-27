#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 66:
// What is the output of the following program 

void f1(int a, int b)
{
    /* whatever */
}

// note that in this function is b in main and b is c.
void f2(int *a, int *b)
{
    int c;   // this acts as a temp variable.
    c = *a;  // c == 5
    *a = *b; // value of a == 6
    *b = c;  // value of b == 5
}

int main(void)
{
    int a = 4, b = 5, c = 6;
    f1(a, b); // since f1  returns nothing (void), this line will not do anything
    f2(&b, &c);
    // a = 4 ; b = 6; c = 5 -> 5 - 4 - 6 = -5
    printf("%d\n", c-a-b); // we got some math to do here
    return EXIT_SUCCESS; 
}

