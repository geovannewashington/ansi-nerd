#include <stdio.h>

// PROTOTYPES
int power(int m, int n);

int main(int argc, char **argv)
{
    for (int i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    // Expected Output: 
    // 1st iteration: 0 1 1 
    // 2nd iteration: 1 2 -3 
    // 3nd iteration: 2 4 9
    return 0;
}

int power(int base, int n)
{
    int power = 1;
    for (int i = 1; i <= n; i++)
        power *= base;
    return power;
}




