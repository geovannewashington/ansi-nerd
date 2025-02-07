#include <stdio.h>

int main(void)
{
        // if we try to assign a whole string to a char variable, the compiler will throw an error

        char c = 0b01001000; // -> Binary literal for 'H' (72 in decimal);
        printf("%c\n", c);
        return 0;
}