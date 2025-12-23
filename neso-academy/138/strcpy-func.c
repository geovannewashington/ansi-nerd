// Neso Academy - Class n. 138: 
// C String Library and String Copy Function - strcpy()  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The <string.h> library provides essential functions for working with strings in C.
// Things like concatenation, length, comparison, and copying — operations that higher-
// level languages often provide as built-ins.

// strcpy() → string copy
// Function signature:
//     char *strcpy(char *dest, const char *src);
//
// Copies the null-terminated string from src into dest,
// including the terminating '\0'. The return value is dest.

/*
int main(void) 
{
    char str1[10] = "Hello";
    char str2[10];
    
    // Copying str1 into str2 
    printf("%p\n", strcpy(str2, str1)); // returns pointer to dest (str2) 
    printf("%p\n", str2);               // same memory address as above
    return EXIT_SUCCESS;
}
*/

// Because strcpy returns dest, you can *chain* calls togueter. 

/*
int main(void) 
{
    char str1[10] = "Hello";        
    char str2[10];        
    char str3[10];        
    
    strcpy(str3, strcpy(str2, str1));
    printf("%s %s\n", str2, str3); // -> Output: Hello Hello
    return EXIT_SUCCESS;
}
*/

// ⚠️ Important caveat:
// strcpy() does NOT check whether the destination array is large enough.
// If dest is too small, this leads to buffer overflows → undefined behavior.

// To reduce this risk, use strncpy().
// Function signature:
//     char *strncpy(char *dest, const char *src, size_t n);
//
// It copies at most n characters from src to dest. 
// If src has fewer than n characters, the remainder of dest is padded with '\0'.
// BUT if src is longer than or equal to n, the result will NOT be null-terminated,
// so you must terminate it manually.

int main(void)
{
    char str1[6] = "Hello"; 
    char str2[4]; // Not enough space to hold "Hello" (+ '\0') 
    
    // Copy up to sizeof(str2) characters
    strncpy(str2, str1, sizeof(str2));
    // Ensure null termination 
    str2[sizeof(str2) - 1] = '\0'; 
    
    printf("%s\n", str2); // Hel
    return EXIT_SUCCESS;
}
