#include <stdio.h>

/* count lines in input*/

int main(void)
{
        int counter, new_lines;
        new_lines = 0;
        
        while ((counter = getchar()) != EOF) {
                if (counter == '\n') {
                        ++new_lines;
                }
        }
        printf("number of lines inserted: %d\n", new_lines);

        return 0;
}