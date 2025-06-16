#include "stdio.h"

// So question is: How many times will 'Neso' be printed on the screen?
// Possibilites are: 10 times, 5 times, infinite times and 0 times.

int my_main(void);

int main(void)
{
    int i = -5;
    while (i <= 5) {
        if (i >= 0)
            break;
        else {
            i++;
            continue;
        }
        printf("Neso");
    }
    my_main();
    return 0;
}

// 0 times!!

// This is the homework problem.
// What is the output of the following funciton (my_main)
int my_main(void) {
    int i = 0;
    for (printf("one\n"); i < 3 && printf(""); i++)
        printf("Hi!\n");
    return 0;
}











