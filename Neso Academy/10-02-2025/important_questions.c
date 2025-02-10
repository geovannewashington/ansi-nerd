#include <stdio.h>

int main(void)
{
        printf("%d\n", printf("%s", "Hello World!"));
        // Outputs: Hello World!12
        /*
        The 12 is printed by the outer printf and it's returned by the inner printf
        The inner printf also prints Hello Wolrd! on screen before returning
         */

        printf("%10s\n", "Hello");
        // I think: it adds ten blank spaces before the Hello, not quite!
        // it prints the stuff up to ten caracters wide

        // [QUESTION N.3]
        char c = 255;
        c = c + 10;
        printf("%d\n", c);
        /*
        My thoughts: since one char = 1 byte = 2^8 - 1 = 255, incremeting +10 would overflow
        and then we would start from 0 and the 1 and so on..., so the output must be 9.
        */


        // [QUESTION N.4]
        // a) Only I and V are correct

        // [QUESTION N.5]
        unsigned int i = 1;
        int j = -4;
        printf("%u\n", i + j); // -> so we are trying to add an unsigned int with a signed one...
        //the most logical output should be -3, but I'm not quite sure what happens we do this
        // some integer value that depends from machine to machine
        printf("%d\n", i + j); // -> should output: -3
        return 0;
}