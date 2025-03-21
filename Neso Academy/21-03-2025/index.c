#include <stdio.h>

/* Aula N.28 - BitWise Operators in C [part2] */
// >> left shift operator 
// it's a binary operator meaning it takes two operands 

// SYNTAX: firstOperand << secondOperand
//          whose bits       decides the number
//          shifted          of places to shift the bits 

// NOTE: when bits are shifted left then trailing positions are filled with zeros.

int main(void)
{
    // Example:
    int x = 3;
    printf("%d\n", x << 1); // -> Expected Output: 6
    // Explanation: 
    // since 3 in bits is 0011 when we shift it left by one it turns into 0110, which represents six in binary

    // Important Point:
    // x << y = x + 2^y 
    // Example:
    
    int b = 6;
    printf("%d\n", b << 2); // -> Expected Output: 10
    //Explanation:
    // since 6 in bits is 0000 0110 (2¹ + 2²) when we shift it left by two it turns into
    // 0001 1000, which represents 24 I guess... so apparently the rule x << y = x + 2^y is not always true
    return 0;
}
