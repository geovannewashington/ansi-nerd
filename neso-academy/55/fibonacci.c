#include <stdio.h>

// Neso Academy, aula n. 55 - Fibonacci Series
// Takes 'n' from user and prints fibonacci series until that number.

int main(void)
{
    int n;
    puts("Enter a number.");
    scanf("%d", &n);

    int a = 0, b = 1;
    // runs n times 
    for (int i = 1; i <= n; i++) {
        printf("%d ", a); 
        int result = a + b;
        a = b;
        b = result;
    }
    putchar('\n');
    return 0;
}
