#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 71:
// What is the output of the following program 

// With static scoping:
// I guess garbage values? WRONG!
// It's actually 3 1, but why?

// With Dynamic scoping:
// 3 4 (d)

int a, b;

void print(void)
{
    // at this point, global a and b are 3 and 1 respectively.
    printf("%d %d\n", a, b); 
}

int func1(void)
{
    int a, c; // this a is local, we don't care about it
    a = 0; b = 1; c = 2; // here we intialize global b to 1
    return c;
}

void func2(void)
{
    int b; // this is not the global b
    a = 3; b = 4; // once again we reasign the global a, to 3 this time.
    print();
}

int main(void)
{
    a = func1(); // a is 2 at this point and it's global.
    func2();
    return EXIT_SUCCESS; 
}

