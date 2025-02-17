#include <stdio.h>

int main(void)
{
        int num = 052; // -> the preceeding 0 means that it's, in fact, an octal value;
        printf("Decimal: %d | Octal: %o\n", num, num); // -> if we use the decimal format specifier, it's going to convert it
        // -> (5 * 8^1) + (2 * 8 ^0) = (5 * 8) + (2 * 8) = 42

        return 0;
}