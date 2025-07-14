#include <stdio.h>

int main(void)
{
    int counter;
    int prev_blank = 0;
    
    while ((counter = getchar()) != EOF) {
        if (counter == ' ') {
            if (!prev_blank) {
                putchar(counter);
                prev_blank = 1;
            }
        } else {
            putchar(counter);
            prev_blank = 0;
        }
    }

    return 0;
}