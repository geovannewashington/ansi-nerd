#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 67:
// What is the output of the following program 


// I think this program will run into an infinite loop
// because we're just returning num-- and not evaluating it.
// wrong.
// it prints 14, 11, 8, 5 and 2... but why
// Oh... I thought the printf statement was not inside the for loop
int func()
{
    static int num = 16;
    return num--;
}

int main(void)
{
    // for loop runs while the second func() is true
    for(func(); func(); func())
    printf("%d\n", func()); // How tf is this printf inside the for loop 
   
    return EXIT_SUCCESS; 
}

