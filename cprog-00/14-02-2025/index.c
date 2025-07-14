#include <stdio.h>

// Exercise 1-6

int main(void)
{
        int c;

        while (c = getchar() != EOF) { 
                /* since we're not using parentheses c will be 0 or 1 (boolean) value
                I'm guessing it depends on the user input?

                or maybe getchar() is already not equal to EOF right away, so we would get 0
                
                0 or 1, this while loop will probably turn into a ininity loop I think
                
                */
                printf("%c\n", c); // -> why is this printf not working?
                putchar(c); // -> this putchar is also not working...
        }

        puts("After the loop...");
        return 0;
}