#include <stdio.h>
#include <stdlib.h>

// How to access the second last (7) element of the arr using pointer arithmetic?

int main(void)
{
    int arr[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
     
    printf("%d\n", *(*(*(arr + 1) + 1))); // 7
    return EXIT_SUCCESS;
}
