#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t n = 10;
    int *arr_ptr = calloc(n, sizeof(int));
    
    for (size_t i = 0; i < n; i++)
        printf("%d ", *(arr_ptr + i));
    printf("\n");
    return 0;
}
