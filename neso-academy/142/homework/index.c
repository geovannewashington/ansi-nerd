// Neso Academy - Class n. 142: 
// Homework problem.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *fruits[] = { "2 Oranges", "2 Apples", "3 Bananas", "1 Pineapple" };

    if (strcmp(fruits[1], fruits[2]) < 0) // 2 Apples, 3 Bananas
        printf("%s is less than %s\n", fruits[1], fruits[2]); // I guess this gets printed 
    else if (strcmp(fruits[1], fruits[2]) > 0) 
        printf("%s is greater than %s\n", fruits[1], fruits[2]);
    
    return EXIT_SUCCESS;
}
