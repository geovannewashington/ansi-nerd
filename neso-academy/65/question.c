#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 65:
// What is the output of the following program 

int func(int num)
{
    int count = 0;
    while (num) {
        count++;
        num >>= 1; 
    }
    return(count);
}

int main(void)
{
    printf("%d\n", func(435)); // 9
    exit(EXIT_SUCCESS);
}

