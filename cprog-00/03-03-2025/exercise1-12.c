#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* prints one word per line */
int main(void)
{
    int c, state;
    state = OUT; // by default we are outside a word
    int i = 0;    
    while ((c = getchar()) != EOF) {
        i++;
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
    printf("%d",i); // -> 11 
    return 0;
}