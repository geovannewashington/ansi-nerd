#include <stdio.h>

int main(void)
{
        char ch;
        puts("Type something (press Ctrl + D to stop on Linux/macOS) or Ctrl + Z on Windows:");
        
        while ((ch = getchar()) != EOF) {
                putchar(ch);
        }
        
        puts("\nDone");
        return 0;
}