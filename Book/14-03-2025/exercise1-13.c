#include <stdio.h>


/* Write a program to print a histogram of the lengths of words in its input */
/* drawing it horizontally is easier */
/* drawing it vertically is more difficult */

#define IN 1 
#define OUT 0

int main(void)
{
    // wc = word_count 
    int c, state, wc, index;
    int line = 0;
    wc = 0;
    
    //fixed length
    // no máximo 20 linhas 
    // no máximo 10 caracteres por linha
    int wordsArr[20][10];

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (state == IN) {
                state = OUT;
                ++wc;
                ++line;
            }
        } else {
            if (state == OUT) {
                state = IN;
                // wordsArr[index] = c;
            } 
        }
    }
    printf("Number of words inserted: %d\n", wc);
    return 0;
}
