#include <stdio.h>

// Exercise 1-7

int main(void)
{
        /* since EOF == -1, the signed integer format specifier should work to output it */
        printf("%d\n", EOF);
        return 0;
}