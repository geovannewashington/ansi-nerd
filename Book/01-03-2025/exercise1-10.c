#include <stdio.h>

/* Misunderstood Attempt */

int main(void)
{
    int c;
    int prev_tab = 0;
    int prev_backspace = 0; 
    int prev_backslash = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            if (!prev_tab) {
                putchar(c);
                prev_tab = 1;
            } 
        } else if (c == '\b') {
            if (!prev_backspace) {
                putchar(c);
                prev_backspace = 1;
            }
        } else if (c == '\\') {
            if (!prev_backslash) {
                putchar(c);
                prev_backslash = 1;
            }
        } else {
            putchar(c);
            prev_backslash = 0;
            prev_tab = 0;
            prev_backspace = 0;
        }

        
    } 
    return 0;
}