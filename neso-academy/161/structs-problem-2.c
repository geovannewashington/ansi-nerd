// Neso Academy - Class n. 161: 
// Structures in C (Solved Problem 2)  

#include <stdio.h>
#include <stdlib.h>

// Takeaways:
// 1. When performing an arithmetic operation on a character in C, you are performing it 
// on the ascii table decimal equivalent, for instance: 'a' + 2 = 97 + 2 = 99 = 'c'.

// 2. 
// When you have a pointer to a struct, the compiler knows the size of that specific struct. 
// Therefore, performing arithmetic operations like ptr + 1 on a struct pointer will advance the 
// pointer by sizeof(struct_type) bytes, moving it to the next struct in memory.

// However, if you want to perform pointer arithmetic in terms of individual bytes, rather than the 
// size of the entire struct, you need to type-cast the struct pointer to a char*

// What is the output?
// options:
// a) 0, c 
// b) 0, a+2 
// c) '0', 'a+2' 
// d) '0', 'c'

struct Ournode {
    char x, y, z;
};

int main() 
{
    struct Ournode p = {'1', '0', 'a'+2};
    struct Ournode *q = &p;
    // printf("%ld\n", sizeof(p)); 
    printf("%c, %c\n", *((char*)q+1), *((char *)q+2)); // My final answer: a)

    return EXIT_SUCCESS;
}
