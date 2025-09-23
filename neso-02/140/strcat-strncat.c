// Neso Academy - Class n. 140: 
// String Concatenate Functions - strcat() & strncat()  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcat function
// function signature:
// char *strncat(char *dest, const char *src);
// used to concatenate (append) a specified number of characters from one string to the end of another.
// the initial character of src overwrites the null terminator (\0) at the end of dest.

// strcat -> string concatenate
// Returns a pointer. char *dest

// Without boundaries checking, potentially causing buffer overflow
// function signature: char *strcat(char *dest, const char *src);

// With boundaries checking, saffer
// function signature: char *strncat(char *dest, const char *src, size_t n);

int main(void)
{
    char str1[100] = "Hello,"; 
    char str2[] = " World! Etiam velit metus, faucibus sed lorem scelerisque, pellentesque faucibus mauris. Quisque dignissim finibus imperdiet. Nullam enim nibh, posuere id sapien ac, eleifend egestas metus. Quisque luctus eros a neque elementum volutpat. Cras mauris tortor, efficitur eu viverra quis, egestas id mi. Mauris bibendum volutpat neque, nec vestibulum erat malesuada ac. Nam purus tellus, convallis nec euismod et, vestibulum eget mi. Curabitur iaculis nibh vel massa tempus pellentesque. Nullam in felis magna. ";
    
    size_t len = strlen(str1); // 7

    printf("%s\n", strncat(str1, str2, sizeof(str1) - len)); // Hello, World!
    
    // if str2 is greater than or qual to str1, it will not automatically append the null terminator.
    if (sizeof(str2) >= sizeof(str1))
        str1[len - 1] = '\0';
    
    if (str1[len - 1] == '\0')    
        puts("NULL character copied"); // I don't think this will get printed...
    return EXIT_SUCCESS;
}
