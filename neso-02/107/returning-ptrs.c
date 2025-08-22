// Neso Academy - Class n. 107: 
// Returning Pointers 

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
// CAUTION!
// You should never return local variables, since they get destroyed after the function returns.
// This produces an warning.


int *find_mid(int arr[], int size) 
{
    if (size % 2 == 0) { // It's even
        fprintf(stderr, "There is no mid value\n");
        return NULL;
    }
    return &arr[size/2]; // integer division, 2.5 -> decimal part gets truncated.
}

int main(void) 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int *mid = find_mid(arr, n);

    if (mid != NULL)
        printf("mid: %d\n", *mid); // 3
    return EXIT_SUCCESS;
}
