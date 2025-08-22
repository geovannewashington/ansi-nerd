// Neso Academy - Class n. 103: 
// Declaring & Initializing Pointers in C

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    char string[] = "TposeProgrammer";
    // int num = 55;
    
    // int *ptr = &num;
    char *ptr_2 = string; 
    
    printf("ptr_2 value: %p\n", ptr_2);
    printf("string[0] address: %p\n", &string[0]);
    printf("ptr_2 desreferencing + 1: %c\n", *ptr_2); // p
    /* printf("num address: %p\n", &num);
    printf("ptr value: %p\n", ptr);
    printf("ptr address: %p\n", &ptr);
    
    if (&num == ptr) {
        puts("RIGHT!");
    } */
    return EXIT_SUCCESS;
}
