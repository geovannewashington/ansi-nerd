#include <stdio.h>
#include <ctype.h>
// #include <stdbool.h>

int main(void)
{
    int c, conv;
    while ((c = getchar()) != EOF) {
        if (isdigit(c))
            printf("%c is a digit.\n", c);
        else {
            printf("%c is not a  digit.\n", c);
        }
    }

    return 0;
}