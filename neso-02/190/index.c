#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);    
    // We use sizeof, to dynamically get the size of an integer in the machine that is compiling 
    // this code.
    int *ptr = (int *)malloc(n * sizeof(int));  

    if (ptr == NULL) {
        fprintf(stderr, "Memory not available\n");
        return EXIT_FAILURE;
    }

    for (i = 0; i < n; i++) {
        printf("Enter an integer: ");
        scanf("%d", ptr + i); // pointer arithmetic
    }

    // print the inserted numbers:
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // pointer arithmetic (dereferecing)
    }
    printf("\n");
    return EXIT_SUCCESS;
}
