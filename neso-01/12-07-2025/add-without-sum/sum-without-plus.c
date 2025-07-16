#include <stdio.h>

// Neso Academy class n. 53 - Adding two numbers without using the plus operator
// NOTE: My homework: I need to also accept negative ints
// Right now the program apparently runs into a infinite loop if we try to input a negative integer.
int main(void)
{
    int x, y;
    puts("Insert two numbers:");
    scanf("%d %d", &x, &y);
    while (y != 0) {
        if (y < 0) {
            x--;
            y++;
        } else {
            x++;
            y--;
        }
    }
    printf("Sum of two values is: %d\n", x); // -> 7
}

