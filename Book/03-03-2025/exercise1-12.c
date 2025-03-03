#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* prints one word per line */
int main(void)
{
    int c, state;
    state = OUT; // by default we are outside a word
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else { 
            if (state == OUT) 
                state = IN;
            putchar(c); 
        }
    }
    return 0;
}