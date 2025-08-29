// Neso Academy - Class n. 115: 
// Pointers (Program 2) | Reversing a Series of Numbers using Pointers  
// My custom version:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ARR_SIZE 5

int main(void) 
{
    int arr[ARR_SIZE];
    int *ptr = NULL;       
    char buf[1024]; // using 1KiB 

    printf("Enter %d elements in the array: ", ARR_SIZE);
    
    if (!fgets(buf, sizeof buf, stdin)) { /* reading input failed */ 
        fprintf(stderr, "Reading input failed, exiting program.");
        return EXIT_FAILURE;
    }
    
    char *p = buf; // p = &buf[0];
    for (ptr = arr; ptr <= &arr[ARR_SIZE - 1]; ptr++) {
        // Skip spaces/tabs/newlines
        while (isspace((unsigned char)*p)) {
            p++;
        }
        
        *ptr = atoi(p);

        while (*p && !isspace((unsigned char)*p)) {
            p++;
        }
    }
    
    puts("Elements in reverse order:"); 
    for (ptr = &arr[ARR_SIZE - 1]; ptr >= arr; ptr--) 
        printf("%d ", *ptr);
   
    printf("\n");
    
    return EXIT_SUCCESS;
}
