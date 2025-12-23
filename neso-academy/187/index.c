#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr); // PRINTS 10
    
    free(ptr);
    printf("%d\n", *ptr); // Undefined Behavior
    return 0;
}
