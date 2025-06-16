#include "stdio.h"

// So question is: How many times will 'Neso' be printed on the screen?
// Possibilites are: 10 times, 5 times, infinite times and 0 times.

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
    return 0;
}

// 0 times!!
