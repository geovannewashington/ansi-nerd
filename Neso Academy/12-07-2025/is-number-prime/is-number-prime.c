#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Neso Academy, class n. 52 - Check if the number is prime number.
// A prime number is a number that is only divisible by 1 and itself (e,g,: 5, 7, 11)
// Definition of a prime number: let number = n, it's prime if, and only if, n % 
int main(void)
{
    int num, val1;
    bool is_prime = true;
    puts("Please enter a number (only positive integers): ");
    scanf("%d", &num);
    
    // Exists the program case user insert a negative number, since there's no sqrt for it. 
    if (num < 0) {
        puts("MAN... I TOLD YOU TO ONLY INSERT POSITIVE integers");
        return 1;
    }
    
    val1 = ceil(sqrt(num)); 

    for (int i = 2; i <= val1; i++)
        if (num % i == 0)
            is_prime = false;
    
    if ((is_prime && num != 1) || num == 2 || num == 3)
        printf("%d is a prime number.\n", num);
    else 
        printf("%d is not a prime number\n", num);

    return 0;
}
