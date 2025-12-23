// Neso Academy - Class n. 99: 
// Constant Arrays in C 

#include <stdio.h>
#include <stdlib.h>

void foo(const char *string) // const char string[]
{
    printf("Your string: %s\n", string);
}

int main(void) 
{
    char string[] = "Sol";
    string[1] = 'a';
    printf("%s\n", string); // Sal
    
    const char my_string[] = "TposeProgrammer";
    my_string[1] = 'c'; // error
    foo(my_string);
    return EXIT_SUCCESS;
}
