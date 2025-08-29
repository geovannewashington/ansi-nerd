// Neso Academy - Class n. 115: 
// Pointers (Program 2) | Reversing a Series of Numbers using Pointers  
// Instructor Version:

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void) 
{
    int a[N], *p;       
    printf("Enter %d elements in the array: ", N);
    for (p = a; p <= a+N-1; p++) // a+N-1 means: &a[0] + (5 - 1) * sizeof(int)
        scanf("%d", p);
    
    printf("Elements in reverse order:\n"); 
    for (p = a+N-1; p >= a; p--) 
        printf("%d ", *p);

    printf("\n");
    return EXIT_SUCCESS;
}
