#include <stdio.h>

// Example:
int main(void)
{
    int ch1 = 72;
    int ch2 = 73;
    int ch3 = 33;
    void *ptr = &ch1;
    printf("%c", *(char *)ptr);
    
    ptr = &ch2;
    printf("%c", *(char *)ptr);
    
    ptr = &ch3;
    printf("%c", *(char *)ptr);
    
    putchar('\n');
    
    // Expected Output: HI!
    return 0;
}
