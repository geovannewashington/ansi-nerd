#include <stdio.h> 

// Program to calculate the sum of first N numbers
int main(void)
{
    int sum = 0, n;  // <- 1 time
    scanf("%d", &n); // <- 1 time

    for (int i = 1; i <= n; i++) {
        sum += i;    // <- n times
    }
    printf("%d\n", sum); // <- 1 time
    return 0; // <- 1 time
    // So we can say that the running time of this program is f(n) = n + 4

    // We need to determine the Big O of it. 
    // let g(n) = n 
    // f(n) <= c.g(n)
    // let's say 
    // n + 4 <= 2n n >= 4
    // n >= 4
    // So we can say that f(n) = O(n) for all n >= n0 (n not), where c = 2 and n0 = 4
}

