#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 64:
// Call by value and Call by reference

void foo(int a, int b);
void bar(int *a, int *b);

int main(void)
{
    int a = 5, b = 2;    

    // Here foo is called by value
    // that is, local copies of passed variables will be created.
    foo(a, b);
    printf("%d %d\n", a, b); // still the same -> 5 2
    
    // Here bar is called by refence
    // that is, local copies will not be created 
    // within the function we'll be working with the addresses the passed 
    // variables, effectivelly changing the original variable's value.
    bar(&a, &b);
    printf("%d %d\n", a, b); // a and b get modified -> 20 50
    exit(EXIT_SUCCESS);
}

void foo(int a, int b)
{
    a = 200;
    b = 400;
}

void bar(int *a, int *b)
{
    // here a and b are pointer (variables whose values is a memory location)
    *a = 20;
    *b = 50;
}
