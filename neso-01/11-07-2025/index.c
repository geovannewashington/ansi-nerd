#include <stdio.h>
// Neso Academy - Class n. 51 - Check if the number is strong number
// instructor solution, more clever.

int main(void)
{
    int n, q, rem, fact = 1, i, result = 0;
    puts("Please enter a number:");
    scanf("%d", &n);

    q = n;
    while (q != 0) {
        rem = q % 10;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        result += fact;
        fact = 1;
        q = q / 10;
    }

    if (result == n)
        printf("%d is a strong number.\n", n);
    else 
        printf("%d is not a strong number.\n", n);
    return 0;
}

