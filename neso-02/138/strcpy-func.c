// Neso Academy - Class n. 138: 
// C String Library and String Copy Function - strcpy()  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The library string.h provides essential functions for working with strings in C, things that you'd 
// take for granted in other higher level languages: concatenation, length and so on...

// strcpy -> string copy
// function signature: char *strcpy(char *dest, const char *src);

/*
int main(void) 
{
    char str1[10] = "Hello";
    char str2[10];
    
    // Here we're copying from str1 to str2
    printf("%p\n", strcpy(str2, str1)); // returns a pointer to the copied string. 
    printf("%p\n", str2);               // same memory address 
    return EXIT_SUCCESS;
}
*/

// We can also chain togueter a series of strcpy calls...
/*
int main(void) 
{
    char str1[10] = "Hello";        
    char str2[10];        
    char str3[10];        
    
    strcpy(str3, strcpy(str2, str1));
    printf("%s %s\n", str2, str3); // -> Hello Hello
    return EXIT_SUCCESS;
}
*/

// strcpy doesn't care and don't check wheter the destination character array is big enough...
// so if the destination is shorter than the source this causes undefined behavior...

// To avoid this we have a safer alternative, strncpy... this n simply means number I guess
// Function signature:
// char *strncpy(char *dest, const char *src, size_t n);
// note that now we have an extra argument which is the limit of characters to copy

int main(void)
{
    char str1[6] = "Hello"; 
    char str2[4]; // Note that str2 has not enough space to hold "Hello" (5)
    // Important! if the source string is greater or equal to sizeof(str2), str2 will NOT place the null 
    // character! so in this case we have to do it manually.
    strncpy(str2, str1, sizeof(str2));
    str2[sizeof(str2) - 1] = '\0'; 
    printf("%s\n", str2); // Hel
    return EXIT_SUCCESS;
}


