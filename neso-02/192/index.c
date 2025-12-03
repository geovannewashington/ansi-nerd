#include <stdio.h>
#include <stdlib.h>

#define MIN 2

int main(void)
{
    int size = MIN; 
    
    int *arr = (int *)malloc(size * sizeof(int));

    if (!arr) {
        fprintf(stderr, "%s\n", "malloc: failed to allocate memory.\n");
        return EXIT_FAILURE;
    }
    
    printf("Enter the two numbers: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }

    // increases the size of arr with realloc
    size += MIN;
    arr = realloc(arr, size * sizeof(int)); 

    printf("Enter two more numbers: \n");
    for (int i = 2; i < size; i++) {
        scanf("%d", arr + i);
    }
    
    // print entered numbers:
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    putchar('\n');
    return EXIT_SUCCESS;
}
