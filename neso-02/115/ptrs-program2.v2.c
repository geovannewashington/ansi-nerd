// Neso Academy - Class n. 115: 
// Pointers (Program 2) | Reversing a Series of Numbers using Pointers  
// My custom version:

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5

int main(void) 
{
    int arr[ARR_SIZE];
    int *ptr = NULL;       
    
    char buf[1024]; // using 1KiB 

    printf("Enter %d elements in the array: ", ARR_SIZE);
    for (ptr = arr; ptr <= &arr[ARR_SIZE]; ptr++) {
        if (!fgets(buf, 1024, stdin)) { /* reading input failed */ 
            return EXIT_FAILURE;
        }
        *ptr = atoi(buf);
    }
    
    puts("Elements in reverse order:"); 
    for (ptr = &arr[ARR_SIZE]; ptr >= arr; ptr--) 
        printf("%d ", *ptr);
   
    printf("\n");
    
    return EXIT_SUCCESS;
}
