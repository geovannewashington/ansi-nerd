// Neso Academy - Class n. 113: 
// Pointers (Program 1) | Sum of Array Elements using Pointers 

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
/*  Instructor version;
    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for (p = &a[0]; p <= &a[4]; p++)
        sum += *p;
   
    printf("Sum is %d\n", sum); 
 */

    // With my changes
    int arr[] = {11, 22, 36, 5, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int *ptr = NULL;

    for (ptr = arr; ptr <= &arr[arr_size]; ptr++)
        sum += *ptr;
   
    printf("Sum is %d\n", sum); 
    return EXIT_SUCCESS;
}
