#include <stdio.h>

/* implementation of a power function */
// func prototype declared before main function.
int power(int base, int n);

int main(void)
{
    // loops ten times from 0 to 9
    for (int i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

int power(int base, int n)
{
    int result = 1;

    for (int i = 0; i < n; ++i) 
        result *= base;

    return result;
}

