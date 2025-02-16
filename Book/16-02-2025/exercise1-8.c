#include <stdio.h>

/* counts the number of blanks, tabs and newlines */

int main(void)
{
        int counter, new_lines, new_tabs, new_blanks;
        counter = 0;
        
        while ((counter = getchar()) != EOF) {
                if (counter = '\n') {
                        ++new_lines;
                }

                if (counter = '\t') {
                        ++new_tabs;
                }

                if (counter = 'blank space') {
                        ++new_blanks;
                }
        }


        printf("new lines inserted: %d\n", new_lines);
        printf("tabs inserted: %d\n", new_tabs);
        printf("blank characters  inserted: %d\n", new_blanks);
        return 0;
}