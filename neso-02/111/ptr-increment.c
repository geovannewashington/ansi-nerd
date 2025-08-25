// Neso Academy - Class n. 111: 
// Pointer Arithmetic (Increment & Decrement) 

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int arr[] = {5, 16, 7, 89};
    
    ///////////////////////////////////////////////////////////////////////////////////////////////    
    // Post/Pre Increment of Pointers 
    int *ptr = &arr[0];

    printf("%d\n", *(ptr++)); // post-increment -> first print, Increment after.   5
    printf("%d\n", *(++ptr)); // pre-increment  -> first Increment and then print. 7

    ///////////////////////////////////////////////////////////////////////////////////////////////    
    // Post/Pre Decrement of Pointers 
    
    int *ptr2 = &arr[2]; // 7

    printf("%d\n", *(--ptr2)); // pre-decrement -> first assign it, then print. 16
    printf("%d\n", *(ptr2--)); // post-decrement -> first print then assign. 16

    return EXIT_SUCCESS;
}
