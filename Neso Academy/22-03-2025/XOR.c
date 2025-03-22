#include <stdio.h>

/* Aula N.30 - Bitwise operators in C (part4) */

/*
 * NOTE: THE XROR operator [^]
 * it's a binary operator and is equal 1 when both bits are different
 * that is: if both bits are 0 or both bits are 1 than result == 0
 **/


int main(void)
{
    // Nice little exercise
    int a = 4, b = 3;
    a = a ^ b; // a -> 7
    b = a ^ b; // b -> 4
    a = a ^ b; // a -> 3

    printf("After XOR, a = %d and b = %d", a, b);
    return 0;
}
