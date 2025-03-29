#include <stdio.h>


int main(int argc, char *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
    putchar('\n');
    
    return 0;
}
