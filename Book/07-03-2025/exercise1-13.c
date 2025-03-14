#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c, state, num_words;
    state = OUT;
    num_words = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state = IN) {
                state = OUT;
                ++num_words;
            }
        } else {
            if (state = OUT)
                state = IN;
        }
    }
    
    printf("Number of words inserted: %d\n", num_words);
    return 0;
}