#include <stdio.h>

/* Aula N.29 - Bitwise Operators in C (Part 3) */
/*
 *  The right-shift operator [>>]
 *  NOTE: nice little rule: x >> y = int(x / int2^y)
 *  Example: 3 >> 1 = 3 in binary is 0000 0011, and then we have 0000 0001 which represents 1 
 *  Therefore 3 >> 1 == 1 
 * */

int a = 3;
int b = 20;

int main(void)
{
    printf("%d\n", a >> 1); // -> Expected Output: 1
    printf("%d\n", b >> 2); // -> int(20 / 2^2) = int(20 / 4) = 5 
    // 20 in binary is 0001 0100 = (2^4 + 2^2) = 16 + 4 = 20
    // an then after shifting twice to the right we have
    // 0000 0101 = (2^2 + 2^0) = 4 + 1 = 5;
    return 0;
}
