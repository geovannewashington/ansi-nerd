#include <stdio.h>

/* Counts the number of blanks, tabs and newlines in the input*/

int main(void)
{
        int counter; 
        int new_lines = 0, new_tabs = 0, new_blanks = 0;

        while ((counter = getchar()) != EOF) {
                if (counter == '\n') {
                        ++new_lines;
                } else if (counter == '\t') {
                        ++new_tabs;
                } else if (counter == ' ') {
                        ++new_blanks;
                }
        }

        printf("New lines inserted: %d\n", new_lines);
        printf("Tabs inserted: %d\n", new_tabs);
        printf("Blank characters  inserted: %d\n", new_blanks);
        
        return 0;
}