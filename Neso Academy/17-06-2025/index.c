#include <stdio.h>

// Neso Academy - aula: Conditionals and Loops (Solved Problem 4)
// Try predicting the output of this program 

// Possible answers: a) Infinite Loop | b) 0 | c) 1 | d) Compiler error 
int main(void) 
{
    unsigned int i = 500;
    while (i++ != 0);
    printf("%d\n", i);
    return 0;
}

// ANSWER: 1. 
// explanation: since i is a unsigned int the maximum value it can store is 
// 2^(4*8) assuming unsigned int i is four bytes. After that the value wraps around and comes back
// to zero, which makes it evaluate the condition (i++ != 0) as false, finally exiting the Loop 
// and the because of the post-increment (i++), the number 1 gets printed
