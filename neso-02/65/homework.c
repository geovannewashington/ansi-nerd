#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 65 (HOMEWORK): 
// What is the output of the following program 

int func(int num)
{
    int count = 2;
    while (num) {
        count++;
        num >>= 2; 
    }
    return(count);
}

int main(void)
{
    printf("%d\n", func(435)); // 5
    exit(EXIT_SUCCESS);
}

