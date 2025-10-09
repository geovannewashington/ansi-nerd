// Neso Academy - Class n. 157: 
// Structure Padding in C  

#include <stdio.h>
#include <stdlib.h>

// 1. the size of a struct is not simply the sum of the sizes of its members.
// there is a concept called 'structure padding'

// The CPU doesn't read 1 byte at a time from memory. 
// it reads 1 'word' at a time.
// Note that a 'word' is a fixed-size unit of data that a processor is designed to handle and process 
// in a single operation. And this depends on the CPU architecture

// Structure padding in C refers to the process where a compiler inserts unused "padding" bytes between 
// members of a structure to ensure proper memory alignment. This alignment is crucial for optiming 
// performance

struct abc {
    char a; // 1 byte
    char b; // 1 byte
    int c;  // 4 bytes
} var;

struct abc_2 {
    char b; // 1 byte
    int c;  // 4 bytes
    char a; // 1 byte
} var1;

int main() 
{
    printf("%ld\n", sizeof(var));  // 8
    printf("%ld\n", sizeof(var1)); // 12
    return EXIT_SUCCESS;
}
