#include <stdio.h>

int main(void)
{
        int ch;
        puts("Type something, (press Ctrl + D to stop on Linux/macOS or Ctrl + Z on Windows):)");
        
        while ((ch = getchar()) != EOF) {
                printf("Character: %c (ASCII: %d)\n", ch, ch);
        }

        puts("\nEOF detected, exiting...");
        return 0;
}