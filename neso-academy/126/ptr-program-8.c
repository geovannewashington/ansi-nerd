// Neso Academy - Class n. 126: 
// Pointers (Program 8) 

#include <stdio.h>
#include <stdlib.h>

// Which one of the choices given below would be printed when the following program is executed? 

// first line: a = 0, b = 3 
// second line: 

void swap(int *x, int *y) 
{
    static int *temp;    
    temp = x;
    x = y;
    y = temp;
}

void printab() 
{
    // static means it "remembers" its value across function calls
    // both a and b are also static variables
    static int i = 0, a = -3, b = -6;    
    printf("%d\n", i);
    // runs max 5 times
    while (i <= 4) {
        if ((++i) % 2 == 1) continue; // skips everything below
        a = a + i; // a = -1 + 4 -> 3 
        b = b + i; // b = -4 + 4 -> 0
    }
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}

int main(void) 
{
    printab();
    printab();
    return EXIT_SUCCESS;
}
